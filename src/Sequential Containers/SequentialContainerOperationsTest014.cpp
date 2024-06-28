#include <iostream>
#include <string>
#include <forward_list>

void foo(std::forward_list<std::string> &flst, const std::string &to_find,
			const std::string &to_insert){
	auto curr = flst.begin();
	auto prev = flst.before_begin();
	while(curr != flst.end()){
		if(*curr == to_find){
			flst.insert_after(curr, to_insert);
			break;		
		}else{
			++prev;
			++curr;
		}
	}	
	if(curr == flst.end()){
		flst.insert_after(prev, to_insert);	
	}
}

int main(){
	std::forward_list<std::string> flst{"Hello", "World" "!"};
	foo(flst, "Hi", "FLAG");
	for(auto i : flst){
		std::cout << i << " ";
	}
	std::cout << std::endl;
	return 0;
}