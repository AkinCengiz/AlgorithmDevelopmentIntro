#include <iostream>
using namespace std;
float a, h, area;
int main()
{
	system("cls");
	cout<<"Kenar uzunlu�unu giriniz (cm) : ";
	cin>>a;
	cout<<"Y�ksekli�i giriniz (cm) : ";
	cin>>h;
	area = a*h/2;
	cout<<"��genin alan� (cm2) : "<<area<<endl;
	system("pause");
	return 0;
}
