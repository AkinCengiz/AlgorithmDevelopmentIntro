#include <iostream>
using namespace std;
float a, h, area;
int main()
{
	system("cls");
	cout<<"Kenar uzunluðunu giriniz (cm) : ";
	cin>>a;
	cout<<"Yüksekliði giriniz (cm) : ";
	cin>>h;
	area = a*h/2;
	cout<<"Üçgenin alaný (cm2) : "<<area<<endl;
	system("pause");
	return 0;
}
