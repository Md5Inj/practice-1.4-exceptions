#include "stdafx.h"
#include "List.h"


List::List()
{
}

List::List(int length)
{
	Message m;
	for (int i = 0; i < length; i++)
	{
		m.Input();
		array.push_back(m);
	}
}

void List::Input()
{
	Message m;
	m.Input();
	array.push_back(m);
}

int List::Length()
{
	return this->array.size();
}

void List::Sort()
{
	sort(this->array.begin(), this->array.end());
}

void List::Replace()
{
	int index = 0;
	cout << "Input index: "; cin >> index;
	Message m;
	m.Input();
	this->array[index] = m;
}

void List::Print()
{
	for (int i = 0; i < this->array.size(); i++)
	{
		this->array[i].Show();
	}
}

Message List::operator[](int n)
{
	return this->array[n];
}


List::~List()
{
}
