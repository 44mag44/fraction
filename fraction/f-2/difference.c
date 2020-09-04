/* DIFFERENCE_C */
#include <stdio.h>

#include "header/nok.h"
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

// сумма
int difference()
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

	// разность числителей 
	int ac=0;

	if(l.a>r.c)
		ac=l.a-r.c;
	if(l.a<r.c)
	{
		ac=r.c-l.a;
		ac=-ac;
	}
	if(l.a==r.c)
	{
		printf("\n0 или бесконечность\n");
		return 0;
	}	

	// NOK
	int nok=0;
	nok=NOK(l.b, r.d);	
	
	// NOD
	int a=0,b=0;
	int nod=0;

	a=ac;
	b=nok;
	nod=NOD(a, b);

	printf("\nРазность: %d/%d\n", a/=nod, b/=nod);

	return nok;
}
