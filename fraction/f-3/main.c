/* MAIN.C */
#include <stdio.h>

#include "header/summa.h"					// сумма
#include "header/difference.h"				// разность
#include "header/product.h"					// произведение
#include "header/quotient.h"					// частное
#include "header/decimal_inversion.h"	// обращение дробей
int main() 
{
	// меню
	printf("\tМЕНЮ\n");

	// список
	printf("- 1. Сложение дробей\n");
	printf("- 2. Вычетание дробей\n");
	printf("- 3. Умножение дробей\n");
	printf("- 4. Деление дробей\n");
	printf("- 5. Обращение дробей\n");

	// выбор пункта меню
	int number=0;
	printf("Номер операции: ");
	scanf("%d", &number);

	switch(number)
	{
		case 1: summa();
			break;
		case 2: difference();
			break;
		case 3: product();
			break;
		case 4: quotient();
			break;
		case 5: decimal_inversion();
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
