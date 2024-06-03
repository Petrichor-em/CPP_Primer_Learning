#include <iostream>
#include <string>
#include <cstdio>

class Quote{
	friend std::ostream &operator<<(std::ostream &os, const Quote &rhs);
public:
	Quote() = default;
	Quote(const std::string &book, double sales_price) :
			bookNo(book), price(sales_price) { std::printf("Quote()\n"); };
	virtual ~Quote(){ std::printf("~Quote()\n"); }
	std::string isbn() const { return bookNo; }
	virtual double net_price(std::size_t n) const { return n * price; }
	Quote &operator=(const Quote &rhs){
		bookNo = rhs.bookNo;
		price = rhs.price;
		return *this;
	}
	virtual void debug() const {
		std::printf("%s, %lf\n", bookNo.c_str(), price);
	}
private:
	std::string bookNo;
protected:
	double price = 0.0;
};

double print_total(std::ostream &os, const Quote &item, std::size_t n){
	double ret = item.net_price(n);
	std::cout << "ISBN: " << item.isbn()
	 	 << " # sold: " << n << " total  due: " << ret << std::endl;
	return ret;
}

class Disc_quote : public Quote {
public:
	Disc_quote() = default;
	Disc_quote(std::string book, double price, std::size_t qty, double disc) : 
		Quote(book, price), quantity(qty), discount(disc) { std::printf("Disc_quote()\n"); }
	~Disc_quote(){ std::printf("~Disc_quote()\n"); }
	double net_price(std::size_t) const = 0;
protected:
	std::size_t quantity = 0;
	double discount = 0.0;	
};

class Bulk_quote : public Disc_quote {
public:
	Bulk_quote() = default;
	Bulk_quote(const std::string book, double price, std::size_t qty, double disc) :
		Disc_quote(book, price, qty, disc) { std::printf("Bulk_Quote()\n"); }	
	~Bulk_quote(){ std::printf("~Bulk_quote()\n"); }
	double net_price(std::size_t min_qty) const override;	
	void debug() const override;
	
};

double Bulk_quote::net_price(std::size_t cnt) const {
	if(cnt >= quantity)
		return cnt * (1 - discount) * price;
	else
		return cnt * price;	
}

void Bulk_quote::debug() const {
	std::printf("%s %lf %lu %lf\n", isbn().c_str(), price, quantity, discount);
}

class RestrictBulkQuote : public Disc_quote {
public:	
	RestrictBulkQuote() = default;
	RestrictBulkQuote(const std::string book, double price, std::size_t min_q, std::size_t max_q, double disc) :
		Disc_quote(book, price, min_q, disc) , max_qty(max_q) { }	
	double net_price(std::size_t cnt) const override;
private:
	std::size_t max_qty = 0.0;	
};

double RestrictBulkQuote::net_price(std::size_t cnt) const {
	if(cnt < quantity) return price * cnt;
	if(cnt >= quantity && cnt <= max_qty) return price * (1 - discount) * cnt;
	if(cnt > quantity) return max_qty * price * (1 - discount) + (cnt - max_qty) * price;
}

/*
class Bulk_quote : public Quote {
public:
	Bulk_quote() = default;
	Bulk_quote(const std::string &book, double p, std::size_t qty, double disc) :
		Quote(book, p), min_qty(qty), discount(disc) { }
	double net_price(std::size_t) const override;
	void debug() const override {
		std::cout << isbn() << " " << price << min_qty << " " << discount << "\n";
	}
protected:
	std::size_t min_qty = 0;
	double discount = 0.0;
};
double Bulk_quote::net_price(std::size_t cnt) const {
	if(cnt >= min_qty)
		return cnt * (1 - discount) * price;
	else
		return cnt * price;
}
*/

/*
class RestrictBulkQuote : public Bulk_quote{
public:
	RestrictBulkQuote() = default;
	RestrictBulkQuote(const std::string &book, double p, std::size_t min_q, double disc, std::size_t max_q):
		Bulk_quote(book, p, min_q, disc), max_qty(max_q) { }	
	double net_price(std::size_t cnt) const override;
	void debug() const override {
		std::cout << isbn() << price << min_qty << " " << discount << " " << max_qty << "\n";
	}
private:
	std::size_t max_qty = 0;
};

double RestrictBulkQuote::net_price(std::size_t cnt) const {
	if(cnt < min_qty)
		return cnt * price;
	else if(cnt >= min_qty && cnt <= max_qty)
		return cnt * (1 - discount) * price;
	else
		return max_qty * (1 - discount) * price + (cnt - max_qty) * price;
}
*/

void debug(const Quote &q){
//	q.Quote::debug();
	q.debug();
}

int main(){
	Quote q("isbn_q", 20);
	Bulk_quote bq("isbn_bq", 20, 5, 0.1);
	RestrictBulkQuote rbq("isbn_rbq", 20, 5, 30, 0.1);
//	RestrictBulkQuote rbq("isbn_rbq", 20, 5, 0.1, 10);
	print_total(std::cout, q, 15);
	print_total(std::cout, bq, 15);
	print_total(std::cout, rbq, 15);
//	debug(q);
//	debug(bq);
//	debug(rbq);
	debug(q);
	debug(bq);
	/*
	Quote()
	Quote()
	Disc_quote()
	Bulk_quote()

	~Bulk_quote()
	~Disc_quote()
	~Quote()
	~Quote()	
	*/
	return 0;
}