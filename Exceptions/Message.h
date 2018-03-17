#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Except.h"

using namespace std;

#pragma once
class Message
{
private:
	int DeviceNum;
	int ID;
	char Text[30];
	char date[10];
	char time[10];
public:
	Message();

	int getDeviceNum();
	int getID();
	char* getText();
	char* getDate();
	char* getTime();

	void setDeviceNum(int);
	void setID(int);
	void setText(char*);
	void setDate(char*);
	void setTime(char*);

	void Input();
	void Show();

	~Message();
};

