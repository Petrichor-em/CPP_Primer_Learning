#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <algorithm>

constexpr int Spade = 0;
constexpr int Heart = 1;
constexpr int Diamond = 2;
constexpr int Club = 3;

class Card{
friend std::ostream &operator<<(std::ostream &os, const Card &rhs);
public:
	Card() = default;
	Card(int v, int c) : value(v), color(c) { }
	bool operator<(const Card &rhs) const {
		if(value < rhs.value) return true;
		if(value > rhs.value) return false;
		if(color < rhs.color) return true;
		if(value > rhs.value) return false;
		return false;	
	}
private:	
	int value = 2;
	int color = Spade;
};

std::ostream &operator<<(std::ostream &os, const Card &rhs){
	os << rhs.value << " " << rhs.color << "\t";
	return os;
}

template <typename T>
int compare(const T &v1, const T &v2){
	return v1 < v2;
}

template <typename T>
void print(std::ostream &os, const std::vector<T> &vec){
	for(const auto &i : vec){
		os << i << " ";
	}
	std::cout << std::endl;
}

int main(){
	std::vector<Card> cardVec;
	std::srand(std::time(0));
	for(int i = 0; i < 10; ++i){
		cardVec.emplace_back(std::rand() % 12, std::rand() % 4);
	}
	print(std::cout, cardVec);
	std::sort(cardVec.begin(), cardVec.end(), compare<Card>);
	print(std::cout, cardVec);
	return 0;
}