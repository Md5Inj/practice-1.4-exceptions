#include "Message.h"
#include <vector>

#pragma once
class List
{
private:
	vector<Message> array;
public:
	List();
	List(int length);
	void Input();
	int Length();
	void Sort();
	void Replace();
	void Print();
	Message operator[](int n);
	~List();
};

