#pragma once
#include <set>
#include "Message.h"

class Folder {
public:
	Folder() = default;
	Folder(const Folder &) = delete;
	Folder &operator=(const Folder &) = delete;
	void addMsg(Message *);
	void remMsg(Message *);
	void printMsg();
	~Folder();
private:
	std::set<Message *> messages;
};