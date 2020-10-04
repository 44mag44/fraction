/* DIRECTLY_AND_ INVERSELY_PROPORTIONAL_H */
#include <stdio.h>

void directly_proportional() // прямо пропорциональные
{
	int num; // число
	int a, b;	 // пропорция
	int sum; // сумма пропорции
	int directlyA, directlyB;

	printf("\n_");	
	printf("\nЧисло: ");	
	scanf("%d", &num);

	printf("Пропорция: ");
	printf("\na: ");	
	scanf("%d", &a);	
	printf("b: ");	
	scanf("%d", &b);

	// сумма данных чисел пропорции
	sum=a+b;
	
	// уножение на а
	directlyA=(num/sum)*a;

	// уножение на b
	directlyB=(num/sum)*b;
	
	printf("\n(%d/%d)*%d = %d; ", num, sum, a, directlyA);
	printf("(%d/%d)*%d = %d.\n", num, sum, b, directlyB);

}

void inversely_proportional() // обратно пропорциональные
{
	int num; // число
	int a, b;	 // пропорция
	int sum; // сумма пропорции
	int inverselyA, inverselyB;

	printf("\n_");	
	printf("\nЧисло: ");	
	scanf("%d", &num);

	printf("a: ");	
	scanf("%d", &a);	
	printf("и\n");	
	printf("b: ");	
	scanf("%d", &b);

	// сумма данных чисел пропорции по формуле
	sum=b+a;

	// уножается на b, потом на a	
	inverselyA=(num/sum)*b;
	inverselyB=(num/sum)*a;
	
	printf("\n(%d/%d)*%d = %d; ", num, sum, b, inverselyA);
	printf("(%d/%d)*%d = %d.\n", num, sum, a, inverselyB);
}

int directly_and_inversely_proportional() //Деление числа на части, прямо и обратно пропорциональные данным числам
{
	printf("\t1. Прямо пропорциональные данным числам\n");
	printf("\t2. Обратно пропорциональные данным числам\n");

	int num;

	printf("\tВыбор операции: ");
	scanf("%d", &num);

	switch(num)
	{
	case 1:
		directly_proportional(); // прямо пропорциональные
		break;
	case 2:
		inversely_proportional(); // обратно пропорциональные
		break;
	default: 
		printf("Что то пошло не так =(\n");
	}

	return num;
}
