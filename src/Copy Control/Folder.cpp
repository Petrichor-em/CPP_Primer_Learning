#include "Folder.h"

void Folder::addMsg(Message *m) {
	messages.insert(m);
}

void Folder::remMsg(Message *m) {
	messages.erase(m);
}

Folder::~Folder() {
	for(auto m : messages) {
		if(m->folders.size() == 1) {
			//delete m;
		} else {
			m->folders.erase(this);
		}
	}
}

void Folder::printMsg() {
	for(auto m : messages) {
		m->print();
		std::cout << std::endl;
	}
}