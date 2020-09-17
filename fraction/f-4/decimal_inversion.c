/* DECIMAL_INVERSION_C */
#include <stdio.h>

#include "header/nod.h"

// структрура дробь 
struct fraction
{
	int a;
	int b;
	float decimal;
	int integral;	

} frac;

// перевод обыкновенной дроби в десятичную
int fraction()
{
	frac.a=0, frac.b=0;

	// a, b
	printf("_\n");

	printf("Дробь:\n");
	printf("a: ");
	scanf("%d", &frac.a);
	printf("b: ");
	scanf("%d", &frac.b);
	
	if(frac.a==0 || frac.b==0)
	{
		printf("- Бесконечность\n");
		return 0;
	}	

	int nod=0; // nod
	float aNOD=0, bNOD=0;	// НОД переменных a и b

	// нахождение НОД
	nod=NOD(frac.a, frac.b);

	// сокращаем a, b
	aNOD=frac.a/nod;
	bNOD=frac.b/nod;

	// десятичная дробь
	frac.decimal=aNOD/bNOD;

	// вывод на экран
	printf("\nДесятичная: %f\n", frac.decimal);

	return frac.decimal;
}

// вычисление кол-ва символов
int size_fractional(int num) 
{
	int count=(num==0) ? 1 : 0;

	while (num!=0)
	{
		num/=10;
		count++;
	}

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

	//printf("%d, %d\n", null_count, fractional);	

	int size=0;	// разиер долей

	size=size_fractional(fractional); // кол-во цифр в окончании
	size+=null_count; // сумма нулей и оканчания

	frac.a=fractional; // числитель
	frac.b=koff(size); // знаменатель

	int nod; // nod
	int aNOD=0;
	int bNOD=0;
	
	nod=NOD(frac.a, frac.b);

	// сокращаем a, b
	aNOD=frac.a/nod;
	bNOD=frac.b/nod;

	if(frac.integral==0)
		printf("\nОбыкновеная дробь : %d/%d\n", aNOD, bNOD);
	else
		printf("\nОбыкновеная дробь : %d (%d/%d)\n", frac.integral, aNOD, bNOD);

	return 0;
}

// выбор функции и вывод на экран
int decimal_inversion()
{
	printf("\t1. Перевести обычную дробь в десятичную\n");
	printf("\t2. Перевести десятичную в обычную дробь\n");

	int num;

	printf("\tВыбор операции: ");
	scanf("%d", &num);

	switch(num)
	{
	case 1:
		fraction(); break;
	case 2:
		decimal(); break;
	default:
		printf("Что то пошло не так =(\n");
	}

	return num;
}
