#include <list>
#include <string>
#include <iostream>
using namespace std;

int main(){
	list<string> sentence;
	auto iter = sentence.begin();
	string word;

//	functions the same with:
//	while(cin >> word) sentence.push_front(word);
	while(cin >> word) iter = sentence.insert(iter, word);
	for(const auto &i : sentence) cout << i << " ";
	return 0;
}
