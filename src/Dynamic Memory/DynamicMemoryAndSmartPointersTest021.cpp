#include <memory>
#include <iostream>
#include <exception>
#include <vector>

class StrBlob;

class StrBlobPtr{
public:
	StrBlobPtr() : curr(0) { }	
	StrBlobPtr(StrBlob &a, std::size_t sz = 0) :
		wptr(a.data), curr(sz) { }
	std::string &deref() const;
	StrBlobPtr& incr();
private:
	std::shared_ptr<std::vector<std::string>>
		check(std::size_t, const std::string &) const;
	std::weak_ptr<std::vector<std::string>> wptr;
	std::size_t curr;
};
std::shared_ptr<std::vector<std::string>>
	StrBlobPtr::check(std::size_t i, const std::string &msg) const
{
	auto ret =	wptr.lock();
	if(!ret){
		throw std::runtime_error("unbound StrBlobPtr");
	}
	if(i >= ret->size()){
		throw std::out_of_range(msg);
	}
	return ret;
}

std::string &StrBlobPtr::deref() const {
	auto p = check(curr, "dereference past end of StrBlobPtr");
	return (*p)[curr];
}

StrBlobPtr& StrBlobPtr::incr(){
	check(curr, "increment past end of StrBlobPtr");
	++curr;
	return *this;			
}
class StrBlob{
public:
	typedef std::string::size_type size_type;
	friend class StrBlobPtr;
	StrBlob();
	StrBlob(std::initializer_list<std::string> il);
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	// 添加和删除元素
	void push_back(const std::string &t) { data->push_back(t); }
	void pop_back();
	// 元素访问
	std::string &front();
	std::string &back();
	// const重载版本
	const std::string &front() const;
	const std::string &back() const;
	StrBlobPtr begin() { return StrBlobPtr(*this); }
	StrBlobPtr end() { return StrBlobPtr(*this, size()); }
private:
	std::shared_ptr<std::vector<std::string>> data;
	void check(size_type i, const std::string &msg) const;
};
StrBlob::StrBlob() : data(std::make_shared<std::vector<std::string>>()) { }
StrBlob::StrBlob(std::initializer_list<std::string> il) : data(std::make_shared<std::vector<std::string>>(il)) { }
void StrBlob::check(StrBlob::size_type i, const std::string &msg) const {
	if(i >= data->size()){
		throw std::out_of_range(msg);
	}
}
std::string &StrBlob::front(){
	check(0, "front on empty StrBlob");
	return data->front();
}
const std::string &StrBlob::front() const{
	check(0, "front on empty StrBlob");
	return data->front();
}
const std::string &StrBlob::back() const {
	check(0, "front on empty StrBlob");
	return data->back();	
}
std::string &StrBlob::back(){
	check(0, "back on empty StrBlob");
	return data->back();
}
void StrBlob::pop_back(){
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}
