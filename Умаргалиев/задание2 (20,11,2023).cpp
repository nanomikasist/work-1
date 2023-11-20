#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int day;
	cout << "Введите день недели по счёту:#";
	cin >> day;
	if (day == 1)
		cout << "Учится" << endl;
	else if (day == 2)
		cout << "Учиться" << endl;
	else if (day == 3)
		cout << "Учиться" << endl;
	else if (day == 4)
		cout << "Учиться" << endl;
	else if (day == 5)
		cout << "Учиться" << endl;
	else if ((day == 6) || (day == 7))
		cout << "Отдых" << endl;
	system("pause");
	return 0;
}