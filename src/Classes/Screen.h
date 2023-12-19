#include <vector>
#include <string>
#include <iostream>
class Screen{
public:
	
	friend class Window_mgr;
	
	//类型定义
	typedef std::string::size_type pos;
	
	//构造器
	Screen() = default;
	Screen(pos ht, pos wd): height(ht), width(wd), contents(ht * wd, ' ') { }
	Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) { }
	
	//读取字符
	char get() const {return contents[cursor];} //隐式内联
	//定义在类内的函数自动是内联的, 因此最好只在类外部定义的地方说明inline
	inline char get(pos r, pos c) const; //显式内联, 函数的定义放在外部
	
	//设置(写入)字符
	Screen &set(char);
	Screen &set(pos, pos, char);
	
	//移动光标到制定位置
	Screen &move(pos r, pos c); //函数定义放在外部, 定义时修饰为内联
	
	//可以记录某成员函数被调用的次数
	void some_member() const{ //为某个成员函数添加++access_ctr可以记录调用次数
		++access_ctr;
	}
	
	//打印屏幕内容
	//非常量对象将调用:
	Screen &display(std::ostream &os){
		do_display(os);
		return *this;
	}
	//常量对象将调用:
	const Screen &display(std::ostream &os) const{
		do_display(os);
		return *this;
	}
	
private:
	pos height = 0;
	pos width = 0;
	pos cursor = 0;
	std::string contents;
	mutable std::size_t access_ctr;
	
	//该函数负责显示屏幕内容
	void do_display(std::ostream &os) const{
		os << contents;
	}
};



inline Screen &Screen::move(pos r, pos c){
	pos row = r * width;
	cursor = row + c;
	return *this;
}

char Screen::get(pos r, pos c) const{
	pos row = r * width;
	return contents[row + c];
}

inline Screen &Screen::set(char c){
	contents[cursor] = c;
	return *this;
}

inline Screen &Screen::set(pos r, pos c, char ch){
	pos row = r * width;
	contents[row + c] = ch;
	return *this;
}



class Window_mgr{
public:
	typedef std::vector<Screen>::size_type ScreenIndex;
	void clear(ScreenIndex);
	ScreenIndex addScreen(const Screen &);
private:
	//类内初始值
	std::vector<Screen> screens = { Screen(24, 48, ' ') };
};

void Window_mgr::clear(ScreenIndex i){
	Screen &s = screens[i];
	s.contents = std::string(s.height * s.width, ' ');
}

Window_mgr::ScreenIndex
Window_mgr::addScreen(const Screen &s){
	screens.push_back(s);
	return screens.size() - 1;
}
