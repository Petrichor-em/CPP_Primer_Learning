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
	Sales_data(const std::string &s): Sales_data(s, 0, 0) { }
	explicit Sales_data(std::istream &is);
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
//使用explilcit关键字后不能隐式转换:
//	print(std::cout, std::cin); // 通过cin隐式转换创建了一个Sale_data
								// 临时量, 常量引用可以绑定一个临时量

//使用explicit关键字不能值初始化,因为会发生隐式转换
//	Sales_data item = std::cin;
//可以强制进行转换
	Sales_data item1 = static_cast<Sales_data>(std::cin);
	print(std::cout, static_cast<Sales_data>(std::cin));
	Sales_data item2("Brave New World"); // ?
	print(std::cout, std::string("Hello"));

}
