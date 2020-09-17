/* DECIMAL_C */
#include <stdio.h>

#include "../header/nod.h"

// структрура дробь 
struct fraction
{
	int a;
	int b;
	int integral;	
} frac;

// вычисление кол-ва символов
int size_fractional(int num) 
{
	int count=0;

	for(;num!=0; num/=10, count++);

	return count;
}

// возведение в степень
int koff(int size)
{
	int tenth=10;
	int a=1;

	while(size)
	{
		if(size%2)	// нечетное
		{
			a*=tenth;
			size--;
		}
		else
		{  
			tenth*=tenth;
			size/=2;
		}
	}

	return a;
}

// перевод десятичной дроби в обыкновенную
int decimal()
{
	printf("_\n");

	char ch=' '; // знак дроби
	int fractional; // дробная часть
	int null_count; // счетчик нулей 
	
	// ввод целой части
	printf("Целая часть: ");	
	scanf("%d", &frac.integral);
	if(frac.integral<0)
		return 0;

	// дробная часть - запись нулей
	printf("Дробная часть начинается с нулей (y/n)?\n: ");
	scanf("%s", &ch);

	if(ch=='y')
	{
		printf("Кол-во нулей: ");
		scanf("%d", &null_count);

		printf("Оканчание: ");
		scanf("%d", &fractional);

		if(fractional<=0)
			return 0;
	}
	else
	{
		printf("Оканчание: ");		
		scanf("%d", &fractional);
		if(fractional<=0)
			return 0;

		null_count=0;
	}

	int size=size_fractional(fractional); // размер после нулей 

	size+=null_count; // сумма нулей и оканчания

	frac.a=fractional; // числитель
	frac.b=koff(size); // знаменатель

	int nod=NOD(frac.a, frac.b); // нахождение nod

	frac.a/=nod; 	// сокращаем a
	frac.b/=nod; 	// сокращаем b

	if(frac.integral==0)
		printf("\nОбыкновеная дробь : %d/%d\n", frac.a, frac.b);
	else
		printf("\nОбыкновеная дробь : %d (%d/%d)\n", frac.integral, frac.a, frac.b);

	return 0;
}
