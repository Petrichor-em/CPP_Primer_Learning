#include <iostream>
#include <string>
class Sales_data{
public:
	std::string BookNo;
	unsigned unit_sold;
	double revenue;
	Sales_data(std::string s, unsigned cnt, double price):
	BookNo(s), unit_sold(cnt), revenue(price) { }
	Sales_data(): Sales_data("", 0, 0) { }
	Sales_data(std::string s): Sales_data(s, 0, 0) { }
	Sales_data(std::istream &is);
};
void read(std::istream &is, Sales_data &item){
	is >> item.BookNo >> item.unit_sold >> item.revenue;
}

void print(std::ostream &os,const Sales_data &item){
	os << item.BookNo << " " << item.unit_sold << " " << item.revenue << std::endl;
}

Sales_data::Sales_data(std::istream &is): Sales_data() {
	read(is, *this);
}

int main(){
	//隐式转换:
	print(std::cout, std::cin); // 通过cin隐式转换创建了一个Sale_data
								//临时量, 常量引用可以绑定一个临时量
	Sales_data item = std::cin;
}
