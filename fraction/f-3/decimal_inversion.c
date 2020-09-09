/* DECIMAL_INVERSION_C */
#include <stdio.h>

#include "header/nod.h"

// структрура дробь 
struct fraction
{
	int a;
	int b;
} frac;

// ф-я дроби
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

// ф-я возведение в степень
int koff(int k, int tenth)
{
	int res=1;
	
	for(; k>0; k--)
		return res*=tenth;
	return 0;
}

// ф--я десятичная дробь
int decimal()
{
	printf("_\n");

	float decimal=0;
	//float a=0;
//	int b=0;
	int k=1;	// степень
	int tenth=10;	// десятая часть

	printf("Десятичная дробь:\n");
	scanf("%f", &decimal);
	
	while(decimal/tenth==0)
	{
		decimal*=tenth;
		k+=1;
	}
		
	printf("\nДробь: %f/%d\n", decimal, koff(k, tenth));
	
	return 0;
}

// ф-я выбор функции и вывод на экран
void decimal_inversion()
{
	//fraction();
	decimal();
}
