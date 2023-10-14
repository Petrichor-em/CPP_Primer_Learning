#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	vector<int> level(11, 0), grades;
	
	//输入成绩
	int grade;
	while(cin >> grade){
		if(grade>=0 && grade <=100){
			grades.push_back(grade);
		}
	}
	
	for(int a : grades){
		level[a/10] ++;
	}
	
	for(int a : level){
		cout << a << " ";
	}
	
	return 0;

}











