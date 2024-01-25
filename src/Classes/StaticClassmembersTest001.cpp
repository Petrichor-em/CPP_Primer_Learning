#include <string>
class Account {
public:
	void calculate(){
		amount += amount * interestRate;
	}
	static double rate() {
		return interestRate;
	}
	static void rate(double);
private:
	std::string owner;
	double amount;
	static double interestRate;
	static double initRate();
};

double Account::interestRate = initRate();

void Account::rate(double newRate){
	interestRate = newRate;
}

int main(){
	double r;
	r = Account::rate();
	Account ac1;
	Account *pac = &ac1;
	r = ac1.rate();
	r = pac->rate();
	
}
