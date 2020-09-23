/* RATIO_C */
#include <stdio.h>

// отношение числа
int ratio()
{
	float x, y;
	float quotient=0; // отношением числа Х к числу Y наз. частное чисел X и Y.

	printf("Отношение:\n");
	printf("x: ");
	scanf("%f", &x); // x
	printf("y: ");
	scanf("%f", &y); // y
	
	if(x<=0 || y<=0)
	{
		printf("- Бесконечность\n");
		return 0;
	}	

	if(x>y)
	{
		quotient=x/y;
		printf("В %f раз(а) больше\n", quotient);
	}
	else if(y>x)
	{
		quotient=x/y;
		printf("В %f раз(а) меньше\n", quotient);
	}
	else if(x==y)
		printf("Пропорциональны\n");

	return quotient;
}

