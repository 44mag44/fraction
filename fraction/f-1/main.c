/* MAIN.C */
#include <stdio.h>

#include "header/summa.h"
#include "header/difference.h"

int main() 
{
	// меню
	printf("\tМЕНЮ\n");

	// список
	printf("- 1. Сложение дробей\n");
	printf("- 2. Вычетание дробей\n");

	// выбор пункта меню
	int number=0;
	printf("Номер пункта: ");
	scanf("%d", &number);

	switch(number)
	{
		case 1: summa();
			break;
		case 2: difference();
			break;
		default:
			printf ("Нет такого пункта\n");
	}

	// начать заново или выйти
	char quit=' ';
	printf("__________________"); 
	printf("\nПродолжить?(y/n) "); 

	scanf("%s", &quit);	

	if(quit=='y')
	{
		printf("\n\t****\n");
		return main();
	}

	return 0;
}
