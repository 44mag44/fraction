/* QUOTIENT_C */
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

// частное 
int quotient()
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

	int a=l.a*r.d;	// произведение l.a, r.d
	int b=l.b*r.c;	// произведение l.b, r.с
	int nod=NOD(a, b); // NOD

	a/=nod; // сокращаем a
	b/=nod; // сокращаем b

	// вывод на экран
	if(a<b)	
		printf("\nЧастное: %d/%d \n", a, b);
	else if(a>b)
	{
		int integral=0;

		for(; a>b; integral++)
			a-=b;

		if(a!=b)		
			printf("\nЧастное: %d (%d/%d) \n", integral, a, b);
		else		
			printf("\nЧастное: %d\n", integral);
	}

	return 0;
}
