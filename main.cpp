#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char p;
	cout << "Input your password:";
	while ((p = _getch()) != 13)
	{
		cout << "*";
	}
	system("pause");
	return 0;
}