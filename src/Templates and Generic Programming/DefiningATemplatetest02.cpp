#include <iostream>
#include <vector>
#include <string>
#include <exception>

template <typename T>
class Blob{
template<typename U>
friend std::ostream &operator<<(std::ostream &os, const Blob<U> &rhs);
public:
	typedef T value_type;
	typedef typename std::vector<T>::size_type size_type;
	Blob();
	Blob(std::initializer_list<T> il);
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	void push_back(const T &t) { data->push_back(t); }
	void pop_back() { data->pop_back(); }
	T &back() { return data->back(); }
	T &front() { return data->front(); }
private:
	std::vector<T> *data = nullptr;
	void check(size_type i, const std::string &msg)	const;
};

template<typename T>
Blob<T>::Blob(){
	data = new std::vector<T>;
}

template<typename T>
Blob<T>::Blob(std::initializer_list<T> il) : Blob()
{	
	*data = il;
}

template<typename T>
void Blob<T>::check(size_type i, const std::string &msg) const {
	if(i >= size()) throw std::out_of_range(msg);
}

template <typename U>
std::ostream &operator<<(std::ostream &os, const Blob<U> &rhs){
	for(const auto &i : *rhs.data){
		os << i << " ";
	}
	return os;
}

template<typename T>
void print(std::ostream &os, const Blob<T> &blob){
	os << blob;
	os << std::endl;
}

int main(){
	Blob<int> b {1, 2, 3, 4, 5};
	print(std::cout, b);
	return 0;
}