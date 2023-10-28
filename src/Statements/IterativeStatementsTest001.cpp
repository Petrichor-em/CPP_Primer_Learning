#include <iostream>
using namespace std;

int main(void){
	string s, temp, max_str;
	unsigned cnt = 1, max=0;
	cin >> temp;
	while(cin >> s){
		if(s == temp){
			++cnt;
		}else{
			if(max < cnt){
				max = cnt;
				max_str = temp;
			}
			cnt = 1;
			temp = s;
		}
	}
	cout << max_str << " " << max << endl;
	return 0;
}
