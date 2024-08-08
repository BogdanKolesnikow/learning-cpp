#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	for (int i = 0, j = 10;i < 10 && j != 17; i++)
	{
		cout << "__" << i << "# __\n";
	}
}

/*
cout << "\n";
*/