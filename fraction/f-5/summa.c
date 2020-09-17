/* SUMMA_C */
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
int summa()
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

	int nok=NOK(l.b, r.d); 	// нахождение NOK

	int koff_b=nok/l.b; // общий знаменатель делим на b
	int koff_d=nok/r.d; // общий знаменатель делим на d

	int ac=(koff_b*l.a)+(koff_d*r.c); // находим числитель

	int a=ac; // числитель
	int b=nok; // знаменатель

	int nod=NOD(a, b); // нахождение NOD

	// сокращаем a, b
	a/=nod;
	b/=nod;

	// вывод на экран
	if(a<b)	
		printf("\nСумма: %d/%d \n", a, b);
	else if(a>b)
	{
		int integral=0;

		for(; a>b;integral++)
			a-=b;

		if(a!=b)		
			printf("\nСумма: %d (%d/%d) \n", integral, a, b);
		else		
			printf("\nСумма: %d\n", integral);
	}

	return 0;
}
