/* SUMMA.C */
/*******************************************************************************/
#include <stdio.h>

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
// одинаковые знаменатели
extern int same_denominators(int b, int d) 
{
	l.b=b;
	r.d=d;
	return (l.b==r.d);
}
// сумма
int summa()
{
	l.a=0, l.b=0;
	r.c=0, r.d=0;

	printf("Первая дробь:\n");
	printf("a: ");
	scanf("%d", &l.a);
	printf("b: ");
	scanf("%d", &l.b);

	printf("Вторая дробь:\n");
	printf("c: ");
	scanf("%d", &r.c);
	printf("d: ");
	scanf("%d", &r.d);

	// b==d
	int ac=l.a+r.c;
	if(same_denominators(l.b, r.d))
		printf("\nсумма: %d/%d\n", ac, l.b);
	else
		printf("\nсумма: разные знаменатели\n");		 

	return ac;
}
/*******************************************************************************/
