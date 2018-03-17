#include "stdafx.h"
#include "Message.h"


Message::Message()
{
	this->DeviceNum = 0;
	this->ID = 0;
	memset(this->Text, 0, sizeof(char)*20);
	memset(this->date, 0, sizeof(char) * 10);
	memset(this->time, 0, sizeof(char) * 10);
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
	int input = 0;
	char inputText[20];
	cout << "input device num (3 digits): ";
	cin >> input;
	if (input < 0) throw Except(1, "Negative digit");
	if (input > 999) throw Except(2, "Out of range");
	this->DeviceNum = input;
	
	cout << "input message ID: "; 
	cin >> input;
	if (input < 0) throw Except(3, "Id cant be a negative");
	this->ID = input;

	cout << "Input text of message: "; cin >> inputText;
	if (strcmp(inputText, "") == 0) throw Except(4, "Text cant be a empty");
	strcpy(this->Text, inputText);

	cout << "Input date in format: dd.mm.yyyy: ";
	cin >> inputText;
	if (strcmp(inputText,"") == 0) throw Except(5, "Date cant be a empty");
	if (strlen(inputText) != 10) throw Except(6, "Incorrect input of date");
	strcpy(this->date, inputText);

	cout << "Input the time in format hh:mm: "; cin >> inputText;
	if (strcmp(inputText, "") == 0) throw Except(7, "Time cant be a empty");
	if (strlen(inputText) != 5) throw Except(8, "Incorrect input of a time");
	if (strchr(inputText, ':') == NULL) throw Except(9, "Your time does not have a :");
	strcpy(this->time, inputText);
}

void Message::Show()
{
	cout << "Device num: " << this->getDeviceNum() << " message ID: " << this->getID() << " Text: " <<
		this->getText() << " Date:" << this->getDate() << endl;
}


Message::~Message()
{
}
