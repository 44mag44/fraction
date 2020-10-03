/* PERCENT_C */
#include <stdio.h>

int fractional_percentages() // проценты в виде дроби
{
	float a;
	float percent;

	printf("\n_");	
	printf("\nЧисло %%: ");	
	scanf("%f", &a);
	
	percent=(a/100);

	printf("Дробь от %f%% = %f\n", a, percent);

	return percent;	
}

int finding_percentage_number() // нахождение процентов данного числа
{
	float a, b;
	float percent;

	printf("\n_");	
	printf("\nНайти %%: ");	
	scanf("%f", &a);
	printf("\nОт числа: ");	
	scanf("%f", &b);	

	percent=(b*a)/100;

	printf("%0.2f %% от числа %0.2f = %0.2f %%\n", a,b, percent);

	return percent;	
}

int finding_number_percentage() // нахождение числа по его процентам
{
	float a, b;
	float x;

	printf("\n_");	
	printf("\n%%: ");	
	scanf("%f", &a);
	printf("Составляют число: ");	
	scanf("%f", &b);	

	x=(b/a)*100;

	printf("%0.2f\n", x);

	return x;	
}

int finding_percentage_numbers() // нахождение процентного отношения чисел
{
	float a, b;
	float percentage; // процентное отношение

	printf("\n_");	
	printf("\nЧисло a: ");	
	scanf("%f", &a);
	printf("Число b: ");	
	scanf("%f", &b);	

	percentage=(a/b)*100;

	printf("Процентное отношение: %0.2f%%\n", percentage);

	return percentage;
}

int percentage_wins() // процент побед
{
	int match; // количество матчей/игр/боев
	float current_wr; // текущий процент побед
	float desired_wr; // желаемый процент побед
	int num_matches_days; // кол-во матчей в день
	float day_wr; // процент побед в день

	int number_wins_now; //кол-во побед сейчас
	int without_defeat; // без поражений
	int wins_per_days; // кол-во побед с учетом побед в день

	int days_without_defeat; // кол-во дней - без пройгрышей
	int days_per_day;	//кол-во дней - с учетом побед в день

	printf("\n_");	
	printf("\nЧисло сыгранных матчей: ");	
	scanf("%d", &match);
	printf("Текущий процент побед: ");	
	scanf("%f", &current_wr);	
	printf("Желаемый общий процент побед: ");	
	scanf("%f", &desired_wr);	
	printf("Кол-во игр в день: ");	
	scanf("%d", &num_matches_days);
	printf("Процент побед в день: ");	
	scanf("%f", &day_wr);
	
	// кол-во побед сейчас
	number_wins_now=(match*current_wr)/100;

	// кол-во матчей - без пройгрышей
	without_defeat=match-((number_wins_now/desired_wr)*100);
	printf("\nПобед без пройгрышей: %d\n", without_defeat);

	// кол-во матчей - с учетом побед в день
	wins_per_days=((without_defeat*day_wr)/100)+without_defeat;
	printf("С учетом побед в день: %d\n", wins_per_days);

	// кол-во дней до желаемого результата без пройгрышей
	days_without_defeat=without_defeat/num_matches_days;
	printf("\nДней - без пройгрышей: %d\n", days_without_defeat);

	// кол-во дней до желаемого результата c учетом побед/день
	days_per_day=wins_per_days/num_matches_days;
	printf("Дней - с учетом побед в день: %d\n", days_per_day);	

	return 0;
}

int percent()
{
	printf("\t1. Число процентов выразить в виде дроби\n");
	printf("\t2. Нахождение процентов данного числа\n");
	printf("\t3. Нахождение числа по его процентам\n");
	printf("\t4. Нахождение процентного отношения чисел\n");
	printf("\t5. Нахождение кол-ва побед в играх\n");

	int num;

	printf("\tВыбор операции: ");
	scanf("%d", &num);

	switch(num)
	{
	case 1:
		fractional_percentages(); // проценты в виде дроби
		break;
	case 2:
		finding_percentage_number(); // нахождение процентов данного числа
		break;
	case 3:
		finding_number_percentage(); // нахождение числа по его процентам
		break;
	case 4:
		finding_percentage_numbers(); // нахождение процентного отношения чисел
		break;
	case 5:
		percentage_wins(); // процент побед
		break;
	default: 
		printf("Что то пошло не так =(\n");
	}

	return num;
}
