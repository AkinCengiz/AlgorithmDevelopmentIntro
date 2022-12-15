/*Üçgen Alaný 1 */
#include <stdio.h>
float a, h, area;
main()
{
	printf("Kenar uzunluðunun giriniz (cm) : ");
	scanf("%f",&a);
	printf("Yüksekliði giriniz (cm) : ");
	scanf("%f",&h);
	area = a*h/2;
	printf("Üçgenin alaný (cm2) : %0.2f",area);
	return 0;
}
