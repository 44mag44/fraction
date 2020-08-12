/* MAIN.C */
/*
	Программа "Дроби"
*/
/*******************************************************************************/
#include <stdio.h>
//my
#include "header/summa.h"

int main() 
{
	// Меню
	printf("\tМЕНЮ\n");
	printf("1. Сложение дробей\n");
	// Выбор пункта меню
	printf("Номер пункта: ");
	int number=0;
	scanf("%d", &number);
	printf("\n");
	switch(number)
	{
		case 1:
			summa();	break;
		default:
			printf ("Нет такого пункта\n");
	}
	// Выход или начать заново
	printf("\nВыйти?(y/n) "); 
	char quit=' ';
	scanf("%s", &quit);	
	if(quit=='n')
	{
		printf("\t****\n");
		return main();
	}

	return 0;
}
/*******************************************************************************/
