#include <iostream>
#include <vector>
using namespace std;

//二分搜索

int main(){
	
	int num, sought;
	cin >> sought; //要找到元素
	vector<int> text;
	while(cin >> num){ // 输入的数是单调递增的
		text.push_back(num);
	}
	auto beg = text.begin(), end = text.end();
	auto mid = beg + text.size()/2; //设置初始状态下的中间点
	//当元素未检查完全且还未找到sought时继续执行循环
	while(mid!=end && mid!=beg && *mid!=sought){
		if(sought < *mid){ //sought在mid之前
			end = mid; //则sought在前半部分, 将end置于mid, 忽略掉后半部分的元素
		}else{ //sought在后半部分
			beg = mid;
		}
		mid = beg + (end - beg)/2; //重置mid
	}
	if(*mid==sought){
		cout << mid - text.begin() + 1;
	}else{
		cout << "Not Found";
	}
	return 0;

}
