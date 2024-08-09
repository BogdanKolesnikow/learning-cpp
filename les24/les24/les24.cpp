#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	for (int i = 1; i < 5; i++)
	{
		cout << "__ " << i << " # __\n";
		for (int j = 1; j < 5; j++)
		{
			cout << "_2_ " << j << " # _2_\n";
		}
	}
}

/*
cout << "\n";
*/