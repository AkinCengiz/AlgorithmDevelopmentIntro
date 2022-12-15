#include <iostream>
#include <math.h>
using namespace std;
float degree, radian, grad;
int main()
{
	system("cls");
	cout << "Aciyi derece cinsinden giriniz : ";
	cin >> degree;
	radian = degree * M_PI / 180;
	grad = degree * 200 / 180;
	cout << degree << " derece : "<<radian<< " radyan\n"<<degree<<" derece : "<<grad<<" grad 'dir..."<<endl;
	system("pause");
	return 0;
}
