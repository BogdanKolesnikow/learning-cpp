#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	
	int a = 0;

	while (a < 10)
	{
		cout << "текст\n" << a; '\n';
		a++;
	}
}

/*
cout << "\n";
*/