#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	
	cout << "1\n";
	goto link;
	cout << "2\n";
	cout << "3\n";
	link:
	cout << "4\n";
	cout << "5\n";

	system("pause");
}

/*
cout << "\n";
*/