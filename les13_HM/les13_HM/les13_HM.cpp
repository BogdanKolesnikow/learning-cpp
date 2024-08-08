#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int num0, num1, sel;
	cout << "Введи 2 числа\n";
	cin >> num0 >> num1;

	cout << "Выберите мат.операцию\n" <<
		"1.сложение\n" <<
		"2.вычитание\n" <<
		"3.умножение\n" <<
		"4.деление\n";

	cin >> sel;
	
	switch (sel)
	{
	case 1:
		cout << "сложение = " << num0 + num1; '/n';
		break;
	case 2:
		cout << "вычитание = " << num0 - num1; '/n';
		break;
	case 3:
		cout << "умножение = " << num0 * num1; '/n';
		break;
	case 4:
		cout <<" деление = " << (float)num0 / num1; '/n';
		break;
	default:
		cout << "ОшибкаЪ";
	}
}


/*
cout << "\n";


switch (num0)
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
*/