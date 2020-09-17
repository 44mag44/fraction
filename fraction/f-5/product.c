/* PRODUCT_C */
#include <stdio.h>

#include "header/nod.h"

// Для левого и правого выражения
struct left
{
	int a;
	int b;
} l;

struct right
{
	int c;
	int d;
} r;

// произведение
int product()
{
	l.a=0, l.b=0;
	r.c=0, r.d=0;

	// a, b
	printf("_\n");

	printf("Первая дробь:\n");
	printf("a: ");
	scanf("%d", &l.a);
	printf("b: ");
	scanf("%d", &l.b);
	
	if(l.a==0 || l.b==0)
	{
		printf("- Бесконечность\n");
		return 0;
	}	

	// c, d
	printf("Вторая дробь:\n");
	printf("c: ");
	scanf("%d", &r.c);
	printf("d: ");
	scanf("%d", &r.d);

	if(r.c==0 || r.d==0)
	{
		printf("- Бесконечность\n");
		return 0;
	}

	int a=l.a*r.c;	// произведение l.a, r.c
	int b=l.b*r.d;	// произведение l.b, r.d
	int nod=NOD(a, b); // NOD

	a/=nod; // сокращаем a
	b/=nod; // сокращаем b

	// вывод на экран
	if(a<b)	
		printf("\nПроизведение: %d/%d \n", a, b);
	else if(a>b)
	{
		int integral=0;

		for(; a>b; integral++)
			a-=b;

		if(a!=b)		
			printf("\nПроизведение: %d (%d/%d) \n", integral, a, b);
		else		
			printf("\nПроизведение: %d\n", integral);
	}


	return 0;
}
