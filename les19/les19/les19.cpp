#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	for (int i = 0; i < 30; i++)
	{
		if (i==10) 
		{
			continue;
		}
		cout << "\nеременная i = " << i; '\n';
	}
}

/*
cout << "\n";
*/