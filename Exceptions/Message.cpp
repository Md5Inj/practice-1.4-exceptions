#include "stdafx.h"
#include "Message.h"


Message::Message()
{
}

int Message::getDeviceNum()
{
	return this->DeviceNum;
}

int Message::getID()
{
	return this->ID;
}

char * Message::getText()
{
	return this->Text;
}

char * Message::getDate()
{
	return this->date;
}

char * Message::getTime()
{
	return this->time;
}

void Message::setDeviceNum(int n)
{
	this->DeviceNum = n;
}

void Message::setID(int id)
{
	this->ID = id;
}

void Message::setText(char * text)
{
	strcpy(this->Text, text);
}

void Message::setDate(char *date)
{
	strcpy(this->date, date);
}

void Message::setTime(char *time)
{
	strcpy(this->time, time);
}

void Message::Input()
{
	cout << "input device num (3 digits): "; cin >> this->DeviceNum;
	cout << "input message ID: "; cin >> this->ID;
	cout << "Input text of message: "; cin >> this->Text;
	cout << "Input date in format: dd.mm.yyyy: "; cin >> this->date;
	cout << "Input the time in format hh:mm: "; cin >> this->time;
}

void Message::Show()
{
	cout << "Device num: " << this->getDeviceNum() << " message ID: " << this->getID() << " Text: " <<
		this->getText() << " Date:" << this->getDate() << endl;
}


Message::~Message()
{
}
