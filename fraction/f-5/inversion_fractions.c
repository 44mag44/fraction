/* INVERRSION_FRACTIONS_C */
#include <stdio.h>

#include "header/common.h"
#include "header/decimal.h"
#include "header/nod.h"

// выбор функции и вывод на экран
int inversion_fractions()
{
	printf("\t1. Перевести обычную дробь в десятичную\n");
	printf("\t2. Перевести десятичную в обычную дробь\n");

	int num;

	printf("\tВыбор операции: ");
	scanf("%d", &num);

	switch(num)
	{
	case 1:
		common(); // в обыкновенную
		break;
	case 2:
		decimal(); // в десятичную
		 break;
	default: 
		printf("Что то пошло не так =(\n");
	}

	return num;
}
