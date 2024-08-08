#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	for (int i = 0; ; i++)
	{
		cout << "__" << i << "# __\n";
		if (i==15)
		{
			break;
		}
	}
	cout << "конец цикла\n";
}

/*
cout << "\n";
*/