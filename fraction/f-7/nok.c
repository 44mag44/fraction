/* NOK_C */
#include <stdio.h>

#define MAX_NUM 999999999

// для нахождения нок двух переменных
int func(int a, int b)
{
	for (int simple=2; simple<MAX_NUM; simple++)
	{
		if ((simple%a==0)&&(simple%b==0))
			return simple;
	}

	return -1;
}

int NOK(int a, int b)
{
	return func(a, b);
}
