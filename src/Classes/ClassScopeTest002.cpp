#include <string>
#include <iostream>
int height;
class Screen {
public:
	typedef std::string::size_type pos;
	Screen() = default;
	Screen(pos ht, pos wd): height(ht), width(wd) { }
	void dummy_fcn(pos height){
		cursor = width * Screen::height;
//		cursor = width * this->height; Same effect
//		cursor = width * ::height;
	}
	pos getCursor() const {
		return cursor;
	}
private:
	pos cursor = 0;
	pos height = 0, width = 0;
};

int main(){
	Screen::pos height = 10, width = 24;
	Screen scr(height, width);
	scr.dummy_fcn(5);
	std::cout << scr.getCursor() << std::endl;
	return 0;
}
