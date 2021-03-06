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

// разность
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
	
	int ac=0;	// разность числителей 
	int nok=0;	// nok
	int nod=0;	// nod
	int a=0,b=0;
	float aNOD, bNOD;	// НОД переменных a и b
	float decimal=0;	// десятичная	дробь

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

	// нахождение NOK
	nok=NOK(l.b, r.d);

	// нахождение НОД
	a=ac;
	b=nok;
	nod=NOD(a, b);

	// сокращаем a, b
	aNOD=a/nod;
	bNOD=b/nod;

	// десятичная дробь
	decimal=aNOD/bNOD;

	// вывод на экран
	printf("\nРазность: %0.0f/%0.0f = %f\n", aNOD, bNOD, decimal);

	return 0;
}
