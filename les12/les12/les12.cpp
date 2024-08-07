#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int num;
	cout << "введи число:_ \n";
	cin >> num;
	if (num > 5)
	{
		cout << "число больше 5ти\n";
	}
	else if(num==5)
	{
		cout << "число равно 5ти\n";
	}
	else
	{
		cout << "число меньше 5ти\n";
	}

}


/*
cout << "\n";
*/