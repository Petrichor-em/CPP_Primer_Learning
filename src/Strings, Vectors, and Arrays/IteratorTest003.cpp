#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main(){
	
	vector<string> vs;
	string s;
	while(cin >> s){
		vs.push_back(s);
		vs.push_back(""); //push a empty string
	}
	
	//由于并未向cvs中写值, 故可以使用const vector<string>类型
	const vector<string> cvs = vs; 
	
	//cbegin cend 返回常量迭代器const_iterator
	for(auto it=vs.cbegin(); it!=vs.cend(); it++){
		if(!it->empty()){
			cout << *it;
		}else{
			cout << endl;
		}
	}
	return 0;
	
}














