#include <iostream>
using namespace std;

void main() {
    setlocale(LC_ALL, "ru");
    int num;
    cout << ("Введите число:");
    cin >> num;
    if (num % 2 == 0)
    {
        cout << ("Это чётное число \n");
    }
    else
    {
        cout << ("Это Нечётное число \n");
    }
}