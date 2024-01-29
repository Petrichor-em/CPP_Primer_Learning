#include <sstream>
#include <vector>
#include <fstream>
#include <iostream>
using namespace std;

struct PersonInfo {
	string name;
	vector<string> phones;
};
vector<PersonInfo> people;

/*
  void display(){
	  for(auto &person : people){
		  cout << person.name << " ";
		  for(auto &phoneNum : person.phones){
			  cout << phoneNum << " ";
		  }
		  cout << endl;
	  }
  }  
 */

bool valid(string phoneNum){
	
}

string format(string phoneNum){
	
}

int main(){
	string line, word;
	ifstream input(".\\PersonInfo.txt");
	while(getline(input, line)){
		PersonInfo info;
		istringstream record(line);
		record >> info.name;
		while(record >> word){
			info.phones.push_back(word);
		}
		people.push_back(info);
	}
//	display();
	
	//output
	for(const auto &entry : people){
		ostringstream formatted, badNums;
		for(const auto &nums : entry.phones){
			if(!valid(nums)){
				badNums << " " << nums;
			}else{
				// 将格式化后的字符串写入formatted
				formatted << " " << format(nums);
			}
		}
		if(badNums.str().empty()){
			cout << entry.name << " "
				 << formatted.str() << endl;
		}else{
			cerr << "input error: " << entry.name
				 << " invalid number(s) " << badNums.str() << endl;
		}
	}
	
}
