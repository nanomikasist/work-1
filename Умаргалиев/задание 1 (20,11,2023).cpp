#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int set1;
	int set2;
	int result;
	cout << "Введите первое число:";
	cin >> set1;
	cout << "Введите второе число:";
	cin >> set2;
	cout << "Какой результат при умножения этих 2 чисел:";
	cin >> result;

	if (result == set1 * set2)
	{
		cout << "Всё верно!";
	}
	else
	{
		cout << "Неверно! Правильный ответ:" << (set1 * set2);
	}
	return 0;
}