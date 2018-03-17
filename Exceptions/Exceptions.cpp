#include "stdafx.h"
#include "List.h"

int main()
{
	List l;
	try
	{
		l.Input();
	}
	catch (Except &e)
	{
		cout << e.type << " " << e.getMessage() << endl;
	}
	catch (...)
	{
		cout << "Error" << endl;
	}
	l.Print();

	system("pause");
    return 0;
}

