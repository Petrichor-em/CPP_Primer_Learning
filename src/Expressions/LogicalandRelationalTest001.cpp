#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void){
	vector<string> text;
	string s;
	while(getline(cin, s)){
		text.push_back(s);
	}
	for(const auto &i : text){ //为什么将i声明为引用类型?
								//string对象可能很大, 这样可以避免对string对象的拷贝
		cout << i;
		if(i.empty() || i[i.size()-1] == '.'){
			//遇到以句号结束的string对象或空string对象就换行
			cout << endl;
		}else{
			//否则就用空格隔开
			cout << " ";
		}
	}
	return 0;
}
