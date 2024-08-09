#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	const  int sz = 7;
	int ar0['sz']{1,223342,4678,-4354543, 47, 57983,7483};
	for (int i = 0; i < sz; i++)
	{
		cout << ar0[i] << '\n';
	}
}

/*
cout << "\n";
*/