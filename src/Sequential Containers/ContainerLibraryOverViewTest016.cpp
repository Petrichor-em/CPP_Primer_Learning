#include <list>
#include <vector>
#include <deque>
#include <forward_list>
#include <string>
using namespace std;

int main(){
	list<string> authors = {"Milton", "Shakespeare", "Austen"};
	vector<const char *> articles = {"a", "an", "the"};
	
	list<string> list2(authors); // 正确, 类型匹配
//	deque<string> authList(authors); // 错误, 容器类型不同, 不能进行容器拷贝初始化
//	vector<string> words(articles); // 错因同上
	// 正确: 可以将const char *转换为string
	forward_list<string> words(articles.begin(), articles.end());
	return 0;
}
