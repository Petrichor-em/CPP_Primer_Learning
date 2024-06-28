#include <iostream>
#include <stack>
#include <string>
#include <cctype>

enum Oprt{
	PLUS, MINUS, MULTIPLY, DIVIDE, INVALID,
};

bool isoprt(char c, Oprt &opration) {
	switch(c) {
		case '+':
			opration = PLUS;
			return true;
			break;
		case '-':
			opration = MINUS;
			return true;
			break;
		case '*':
			opration = MULTIPLY;
			return true;
			break;
		case '/':
			opration = DIVIDE;
			return true;
			break;
		default:
			opration = INVALID;
			return false;
	}	
}

double dequeToDouble(std::deque<char> &cq) {
	std::string str;
	while(!cq.empty()) {
		str.push_back(cq.front());
		cq.pop_front();
	}
	return std::stod(str);
}

double operate(std::pair<double, double> oprands, Oprt state) {
	switch (state) {
		case PLUS:
			return oprands.first + oprands.second;
		case MINUS:
			return oprands.first - oprands.second;
		case MULTIPLY:
			return oprands.first * oprands.second;
		case DIVIDE:
			return oprands.first / oprands.second;
	}
}

int main(){
	std::string expr;
	std::getline(std::cin, expr);
	std::stack<char> st;
	for(auto i : expr) {
		st.push(i);	
//---------DEBUG------------
		std::cout << "st.push " << i << std::endl;
		if(i == ')') {
			st.pop();
			std::deque<char> cq;
			Oprt state = INVALID;
			std::pair<double, double> oprands(0.0, 0.0);
			while(st.top() != '(') {
				if(std::isdigit(st.top()) || st.top() == '.') {
					cq.push_front(st.top());
				}
				if(isoprt(st.top(), state)) {
						oprands.second = dequeToDouble(cq);	
//----------DEBUG------------
						std::cout << "oprands.first " << oprands.first << std::endl;
				}
				st.pop();
			}
			st.pop();
//----------DEBUG------------
			std::cout << "st.size " << st.size() << std::endl;
			oprands.first = dequeToDouble(cq);
//----------DEBUG------------
			std::cout << "oprands.second " << oprands.second << std::endl;
			double result = operate(oprands, state);				
			std::string str_result = std::to_string(result);
//----------DEBUG------------
			std::cout << str_result << std::endl;
			for(auto i : str_result) {
				st.push(i);
			}
//----------DEBUG------------
			std::stack<char> st2(st);
			while(!st2.empty()) {
				std::cout << st2.top();
				st2.pop();
			}
			std::cout << std::endl;
		}
	}
	std::cout << "-------out of for---------" << std::endl;
	std::deque<char> final_result;
	while(!st.empty()) {
		if(st.top() != ' ') {
			final_result.push_front(st.top());
		}
		st.pop();
	}
	std::cout << dequeToDouble(final_result) << std::endl;
	return 0;
}