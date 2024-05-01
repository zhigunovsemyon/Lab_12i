/* Одноклеточная амеба каждые три часа делится на две клетки.
Определить, сколько клеток будет через 3, 6, 9, … 24 часа.
Решить эту задачу без использования рекурсии*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define CELL_DIVIDE 2
int GetCells(void);
int GetEndTime(void);
int GetTimeStep(void);

int main(void)
{
	int hours, cells = GetCells(),
		time_step = GetTimeStep(),
		end_time = GetEndTime();

	//Цикл подсчёта числа клеток до достижения END_TIME
	for (cells, hours = 0; hours < end_time;//Определение начальных значений клеток и часов
		cells *= CELL_DIVIDE, hours += time_step)		//Каждый оборот делятся клетки и прибавляются часы
	{
		printf("%d клеток после %d ч\n", cells, hours);
	}

	printf("\nИТОГО: %d клеток после %d ч\n", cells, hours);
	return 0;
}

/*Ввод пользователем начального числа клеток
Возврат этого значения*/
int GetCells(void)
{
	int cells;
	do//Проверка ввода
	{
		printf("Исходное число клеток: ");
		scanf("%d", &cells);
		if (cells >= 0)
			return cells;
		printf("Число должно быть положительным\n");
	} while (1);
}

/*Полученение количество часов наблюдения с ввода*/
int GetEndTime(void)
{
	int n;
	do//Проверка ввода
	{
		printf("Введите количество часов наблюдения: ");
		scanf("%d", &n);
		if (n >= 0)
			return n;
		printf("Число должно быть положительным\n");
	} while (1);
}

/*Полученение шага наблюдения с ввода*/
int GetTimeStep(void)
{
	int n;
	do//Проверка ввода
	{
		printf("Введите шаг наблюдения за клетками: ");
		scanf("%d", &n);
		if (n >= 0)
			return n;
		printf("Число должно быть положительным\n");
	} while (1);
}
