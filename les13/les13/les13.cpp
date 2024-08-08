#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int a;
	cin >> a;

	switch (a)
	{
	case 1:
		cout << "вы ввели 1\n";
		break;
	case 2:
		cout << "вы ввели 2\n";
		break;
	default:
		cout << "вы ввели не то число\n";
		break;
	}
}


/*
cout << "\n";
*/