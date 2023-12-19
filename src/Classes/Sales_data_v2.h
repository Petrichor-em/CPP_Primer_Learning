#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>
class Sales_data {
public:
	//构造函数
	Sales_data() =default;
	Sales_data(const std::string &s, unsigned n, double p):
			   bookNo(s), units_sold(n), revenue(p) { }
	Sales_data(std::istream &is);
	std::string isbn() const { return bookNo; }
	Sales_data &combine(const Sales_data &rhs);
private:
	friend std::istream &read(std::istream &is, Sales_data &item);
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	double avg_price() const{
		return units_sold ? revenue / units_sold : 0;
	}
};

std::istream &read(std::istream &is, Sales_data &item){
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

#endif
