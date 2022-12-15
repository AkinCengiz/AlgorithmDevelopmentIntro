#include <stdio.h>
#include <math.h>
float degree, radian, grad;
int main()
{
	printf("Acinin derece cinsinden degeri : ");
	scanf("%f",&degree);
	radian = degree * M_PI / 180;
	grad = degree * 200 / 180;
	printf("%0.2f derece : %0.2f radyan\n%0.2f derece : %0.2f grad 'dir'",degree,radian,degree,grad);
	return 0;
}
