#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>
struct Sales_data{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

//	构造函数#1 默认构造器
//	因为提供了类型内初始值,所以可以直接默认构造
	Sales_data() = default;
//	若编译器不支持类内初始值,则使用构造函数初始值列表
//		    #2	
	Sales_data(const std::string &s): bookNo(s){ }
//			#3
	Sales_data(const std::string &s, unsigned n, double p):
			   bookNo(s), units_sold(n), revenue(p*n){ }// 未被初始值列表赋值的成员数据赋类内初始值
	
//构造函数	#4
	Sales_data(std::istream &is){
		is >> bookNo >> units_sold >> revenue;
	}
	
//	添加combine成员
/*
	Sales_data &combine(const Sales_data &rhs){
		units_sold += rhs.units_sold;
		revenue += rhs.revenue;
		return *this; //返回左侧运算对象（左值，故返回引用）
	}
*/

	Sales_data &operator+=(const Sales_data &rhs){
		units_sold	+=	rhs.units_sold;
		revenue		+=	rhs.revenue;
		return *this;
	}

//	添加isbn成员
	const std::string &isbn() const{
		return bookNo;
	}
};
	
// 定义接口

// 1.定义接口函数read
/*
std::istream &read(std::istream &is, Sales_data &item){
	double price = 0.0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = item.units_sold * price;
	return is; //模拟<<运算符, 返回左侧运算对象
}
 */

std::istream &operator>>(std::istream &is, Sales_data &rhs){
	double price;
	is >> rhs.bookNo >> rhs.units_sold >> price;
	if(is){
		rhs.revenue = price * rhs.units_sold;
	}else{
		rhs = Sales_data(); // 若流无效, 将rhs重置为空Sales_data对象, 确保对象处于正确的状态
	}
	return is;
}

// 2.定义接口函数print
/*
std::ostream &print(std::ostream &os, const Sales_data &item){
	os << item.isbn() << " " << item.units_sold << " "
	   << item.revenue;
	return os;
}
*/

std::ostream &operator<<(std::ostream &os, const Sales_data &rhs){
	os << rhs.isbn() << " " << rhs.units_sold << " " << rhs.revenue;
	return os;
}

// 3.定义接口函数add
/*
Sales_data add(const Sales_data &lhs, const Sales_data &rhs){
	Sales_data sum = lhs;
	return sum;
}
 */
/*
Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs){
	Sales_data sum;
	sum.units_sold	=	lhs.units_sold	+	rhs.units_sold;
	sum.revenue		=	lhs.revenue		+	rhs.revenue;
	sum.bookNo		=	lhs.bookNo;
	return sum;
  }
 */

// 通常使用复合赋值运算符来实现算术运算符
Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs){
	Sales_data sum = lhs;
	sum += rhs;
	return sum;
}

bool operator==(const Sales_data &lhs, const Sales_data &rhs){
	return	lhs.isbn()		== rhs.isbn()		&&
			lhs.units_sold	==	rhs.units_sold	&&
			lhs.revenue		==	rhs.revenue;
}

bool operator!=(const Sales_data &lhs, const Sales_data &rhs){
	return !(lhs == rhs);
}

#endif
