#include "stdafx.h"
#include "List.h"

int main()
{
	List l;
	try
	{
		l.Input();
		l.Input();
		cout << "Length of array: " << l.Length() << endl;
		l.Sort();
		l.Print();
		l.Input();
		l.Print();
		Message m = l[0];
		cout << m.getDeviceNum() << endl << m.getID() << endl << m.getText() << endl << m.getDate() << endl;
		l.Replace();
		l.Print();
	}
	catch (Except &e)
	{
		cout << e.type << " " << e.getMessage() << endl;
	}
	catch (...)
	{
		cout << "Error" << endl;
	}

	system("pause");
    return 0;
}

