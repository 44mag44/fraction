/* DECIMAL_INVERSION_C */
#include <stdio.h>

#include "header/nod.h"

// структрура дробь 
struct fraction
{
	int a;
	int b;
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
	float decimal=0;	// десятичная	дробь

	// нахождение НОД
	nod=NOD(frac.a, frac.b);

	// сокращаем a, b
	aNOD=frac.a/nod;
	bNOD=frac.b/nod;

	// десятичная дробь
	decimal=aNOD/bNOD;

	// вывод на экран
	printf("\nДесятичная: %f\n", decimal);

	return decimal;
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

	int integral=0; // целая часть 
	char ch='.'; // знак дроби	
	int fractional=0; // дробная часть

	// файл на запись дробной части
	FILE *file;
	char *name="file/fractional_numder.list";		
	if((file=fopen(name, "w"))==NULL)
	{
		printf("Что то пошло не так =(");
		return 0;	
	}
	printf("Десятичная дробь: ");

	scanf("%d", &integral);
	if(integral<0)
		return 0;

	scanf("%c", &ch);
	if(!ch)
		return 0;

	scanf("%d", &fractional);
	// запись в файл дробной части
	fprintf(file, "%d", fractional);

	/*
	int size=0;	// разиер долей
	int a=0;		// числитель	
	int b=0;		// знаменатель

	size=size_fractional(frac);
	a=frac;
	b=koff(size);

	// nod
	int nod;
	int aNOD=0;
	int bNOD=0;
	
	nod=NOD(a, b);

	// сокращаем a, b
	aNOD=a/nod;
	bNOD=b/nod;

	if (integral!=0)
		printf("\nОбыкновеная дробь: %d(%d/%d)\n", integral, aNOD, bNOD);
	else
		printf("\nОбыкновеная дробь: %d/%d\n", aNOD, bNOD);
	*/
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
