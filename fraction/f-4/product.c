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

	int ac=0; // числители
	int bd=0; //знаменатели 
	int nod=0;
	float aNOD=0, bNOD=0;	// НОД переменных a и b
	float decimal=0;	// десятичная	дробь

	// произведение
	ac=l.a*r.c;	// числителей
	bd=l.b*r.d;	// знаменателей

	// NOD
	nod=NOD(ac, bd);

	// сокращаем aс, bd
	aNOD=ac/nod;
	bNOD=bd/nod;

	// десятичная дробь
	decimal=aNOD/bNOD;

	// вывод на экран
	printf("\nПроизведение: %0.0f/%0.0f = %f\n", aNOD, bNOD, decimal);

	return 0;
}
