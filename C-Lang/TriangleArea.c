/*��gen Alan� 1 */
#include <stdio.h>
float a, h, area;
main()
{
	printf("Kenar uzunlu�unun giriniz (cm) : ");
	scanf("%f",&a);
	printf("Y�ksekli�i giriniz (cm) : ");
	scanf("%f",&h);
	area = a*h/2;
	printf("��genin alan� (cm2) : %0.2f",area);
	return 0;
}
