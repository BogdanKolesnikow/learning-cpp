/*
Введите три числа и выведите на экран значение суммы,
произведения и среднее арифметическое этих чисел.
*/
#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Rus");
    int num0 = 0, num1 = 0, num2 = 0;
    cout << "Введите число 1 ";
    cin >> num0;
    cout << "Введите число 1 ";
    cin >> num1;
    cout << "Введите число 1 ";
    cin >> num2;
    int sum0 = 0, sum1 = 0, sum2 = 0, sum4 = (num0+num1+num2)/3;
    cout << "\nСумма 3х чисел:_ " << num0 + num1 + num2 << "\nСреднее арифметическое 3х чисел:_ " << sum4 << "\nпроизведение 3х чисел:_ " << num0 * num1 * num2;
}
