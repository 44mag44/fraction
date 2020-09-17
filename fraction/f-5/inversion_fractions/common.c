/* COMMON_C */
#include <stdio.h>
#include <float.h>

#include "../header/nod.h"

// структрура дробь 
struct fraction
{
	int a;
	int b;
	float decimal;
} frac;

// перевод обыкновенной дроби в десятичную
int common()
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

	int nod=NOD(frac.a, frac.b); // нахождение НОД

	frac.a/=nod; // сокращаем a
	frac.b/=nod; // сокращаем b

	frac.decimal=(float)frac.a/(float)frac.b; // десятичная дробь

	

	// вывод на экран
	printf("\nДесятичная: %f\n", frac.decimal);

	return frac.decimal;
}
