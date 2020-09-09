/* NOD.C */
#include <stdio.h>

int NOD(int a,int b)
{
	int nod = 1;

    if (a > b)
	{
        int tmp = a;
        a = b;
        b = tmp;
    }

    while (a > 1 && b > 1)
	{
        for (int i = 2; i <= a; i++)
	{
            if (a % i == 0 && b % i == 0)
			{
                nod *= i;
                a /= i;
                b /= i;
                break;
            }
            if (a % i == 0)
			{
                a /= i;
                break;
            }
            if (b % i == 0)
			{
                b /= i;
                break;
            }
        }
    }

    return nod;
}
