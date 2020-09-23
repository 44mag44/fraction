/* PROPORTION_C */
#include <stdio.h>

// поиск b
void search_a()
{
	int b,c,d;
	int x; // неизвестное число

	int extreme;	// крайние члены -> a*c
	int middle;		// средние члены -> b*d

	printf("Первое отношение:\n");
	printf("b: ");
	scanf("%d", &b);
	
	printf("Второе отношение:\n");
	printf("c: ");
	scanf("%d", &c);
	printf("d: ");
	scanf("%d", &d);
	

	x=(b*c)/d; // поиск неизвестного крайнего члена
	
	printf("\na = %d\n", x);

	extreme=x*d; // a*d
	middle=b*c;
		
	if(extreme==middle)
		printf(" Пропорциональны\n");
	else
		printf(" Непропорциональны\n");
}

// поиск b
void search_b()
{
	int a,c,d;
	int x; // неизвестное число

	int extreme;	// крайние члены -> a*c
	int middle;		// средние члены -> b*d

	printf("Первое отношение:\n");
	printf("a: ");
	scanf("%d", &a);
	
	printf("Второе отношение:\n");
	printf("c: ");
	scanf("%d", &c);
	printf("d: ");
	scanf("%d", &d);
	

	x=(a*d)/c; // поиск неизвестного крайнего члена
	
	printf("\nb = %d\n", x);

	extreme=a*d;
	middle=x*c; // b*c

	if(extreme==middle)
		printf(" Пропорциональны\n");
	else
		printf(" Непропорциональны\n");
}

// поиск c
void search_c()
{
	int a,b,d;
	int x; // неизвестное число

	int extreme;	// крайние члены -> a*c
	int middle;		// средние члены -> b*d

	printf("Первое отношение:\n");
	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	
	printf("Второе отношение:\n");
	printf("d: ");
	scanf("%d", &d);
	

	x=(a*d)/b; // поиск неизвестного крайнего члена
	
	printf("\nc = %d\n", x);

	extreme=a*d;
	middle=b*x; // b*c 

	if(extreme==middle)
		printf("Пропорциональны\n");
	else
		printf("Непропорциональны\n");
}

// поиск d
void  search_d()
{
	int a,b,c;
	int x; // неизвестное число

	int extreme;	// крайние члены -> a*c
	int middle;		// средние члены -> b*d

	printf("Первое отношение:\n");
	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	
	printf("Второе отношение:\n");
	printf("c: ");
	scanf("%d", &c);
	

	x=(b*c)/a; // поиск неизвестного крайнего члена
	
	printf("\nd = %d\n", x);

	extreme=a*x; // a*d
	middle=b*c;

	if(extreme==middle)
		printf(" Пропорциональны\n");
	else
		printf(" Непропорциональны\n");
}

// пропорция чисел
int proportion()
{
	char ch;

	printf("_\n");

	printf("Какую неизвестную ищем a, b, c, d? ");
	scanf("%s", &ch);

	switch(ch)
	{
	case 'a': search_a();
		break;
	case 'b': search_b();
		break;
	case 'c': search_c();
		break;
	case 'd': search_d();
		break;
	default:
		printf("\n\tЧто то пошло не так =(\n");
	}

	return 0;
}
