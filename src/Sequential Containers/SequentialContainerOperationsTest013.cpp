#include <iostream>
#include <forward_list>

int main(){
	std::forward_list flst{1, 2, 3, 4, 5, 6};
	auto prev = flst.before_begin();
	auto curr = flst.begin();
	while(curr != flst.end()){
		if(*curr % 2){
			curr = flst.erase_after(prev);
		}else{
			prev = curr;
			++curr;
		}
	}
	for(auto i : flst){
		std::cout << i << " ";
	}
	std::cout << std::endl;
}