#include <iostream>
#include <string>

class Quote{
public:
	Quote() = default;
	Quote(const std::string &book, double sales_price) :
			bookNo(book), price(sales_price) { }	
	virtual ~Quote() = default;
	std::string isbn() const {
		return bookNo; }
	virtual double net_price(std::size_t n) const {
		return n * price;
	}
private:
	std::string bookNo;
protected:
	double price = 0.0;
};

std::string Quote::isbn() const{
	return bookNo;	
}

class Bulk_quote : public Quote {
public:
	Bulk_quote() = default;
	Bulk_quote(const std::string &, double, std::size_t , double);
	double net_price(std::size_t) const override;
private:
	std::size_t min_qty = 0;
	double discount = 0.0;
};

double print_total(std::ostream &os, const Quote &item, std::size_t n){
	double ret = item.net_price(n);
	std::cout << "ISBN: " << item.isbn()
	 	 << " # sold: " << n << " total  due: " << ret << std::endl;
	return ret;
}

int main(){

}