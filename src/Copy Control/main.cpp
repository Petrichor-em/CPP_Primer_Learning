#include "Message.h"
#include "Folder.h"

int main() {
	Folder f1;
	std::string str;
	while(std::cin >> str) {
		Message *m = new Message(str);
		m->save(f1);
	}
	Message *m = new Message("FLAG");
	f1.addMsg(m);
}