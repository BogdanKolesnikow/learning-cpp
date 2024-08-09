#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int len = '*', wid = '*';
	cout << "какая длинна?\n";
	cin >> len;
	cout << "какая ширина?\n";
	cin >> wid;
	for (int j = 0; j < wid; j++)
	{
		for (int i = 0; i < len; i++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	cout << "\n";
}

/*
cout << "\n";

--->>
*****
*****
*****
 ширина 5 высота 3
*/