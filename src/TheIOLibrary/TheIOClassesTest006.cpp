#include <iostream>
using namespace std;

int main(){
	cout << cin.tie(); // 返回关联流对象的指针
//	cin.tie(&cout); // 将cin关联到cout, 默认已经关联
	//old_tie指向当前关联到cin的流
	ostream *old_tie = cin.tie(nullptr); // 传入空指针, cin不再与任何流关联
	//将cin与cerr关联到一起
	cin.tie(&cerr); // 读取cin会刷新cerr而不是cout
	cin.tie(old_tie); // 恢复正常关联
	return 0;
}
