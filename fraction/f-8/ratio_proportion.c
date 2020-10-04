/* RATIO_PROPORTION_C */

#include <stdio.h>

#include "header/ratio.h"
#include "header/proportion.h"

// выбор функции и вывод на экран
int ratio_proportion()
{
	printf("\t1. Отношение\n");
	printf("\t2. Пропорция\n");

	int num;

	printf("\tВыбор операции: ");
	scanf("%d", &num);

	switch(num)
	{
	case 1:
		ratio();
		break;
	case 2:
		proportion();
		 break;
	default: 
		printf("Что то пошло не так =(\n");
	}

	return num;
}
