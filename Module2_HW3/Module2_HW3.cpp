#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>

void main()

{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	int tn = 0;
	printf("task number:\t");
	scanf("%d", &tn);

	if (tn == 1)
	{
#pragma region 1. Определить, является ли данное целое число четным
		int x = -100 + rand() % 100;
		printf("x=%d\n\n", x);

		if (x % 2 == 0)
		{
			printf("число четное\n\n");
		}
		else
		{
			printf("число нечетное\n\n");
		}

#pragma endregion
	}
	else if (tn == 2)
	{
#pragma region 2. Записать условие, которое является истинным, когда  целое А кратно двум или трем.
		int A = -100 + rand() % 100;
		printf("A=%d\n\n", A);

		if (A % 2 == 0 || A % 3 == 0)
		{
			printf("True\n\n");
		}
		else
		{
			printf("False\n\n");
		}
#pragma endregion
	}
	else if (tn == 3)
	{
#pragma region 3. Записать условие, которое является истинным, когда каждое из чисел  А и В нечетное.
		int A = 1 + rand() % 1000;
		int B = 1 + rand() % 1000;
		printf("A=%d, B=%d\n\n", A, B);

		if (A % 2 != 0 && B % 2 != 0)
		{
			printf("True\n\n");
		}
		else
		{
			printf("False\n\n");
		}
#pragma endregion
	}
	else if (tn == 4)
	{
#pragma region 4. Вычислить значение логических выражений при следующих значениях логических переменных X=0, Y=0, Z=1
		int x = 0, y = 0, z = 1;
		
		printf("x=%d, y=%d, z=%d\n\n", x, y, z);

		if (x > y&&y > z)
		{
			printf("4a. true\n\n");
		}
		else
		{
			printf("4a. false\n\n");
		}
		if (x > y)
		{
			printf("4b. true\n\n");
		}
		else
		{
			printf("4b. false\n\n");
		}
		if ((x > z) < z)
		{
			printf("4c. true\n\n");
		}
		else
		{
			printf("4c. false\n\n");
		}
#pragma endregion
	}
	else if (tn == 5)
	{
#pragma region 5. Записать логическое выражение, описывающее область определения функции 
		// y = 2tg x;
		// у = 3 / (x - 1).

		int x = -1000 + rand() % 1000;
		int n = -1000 + rand() % 1000;
		float p = 3.14;
		printf("x=%d, n=%d\n\n", x, n);

		if (x != p / 2 + p*n)
		{
			printf("Область определения функции y=2tg x: множество всех действительных чисел\n\n");
		}
		else
		{
			printf("Функция не имеет области определения при данном значении x\n\n");
		}
		if (x != 1)
		{
			printf("Область определения функции y=3/(x-1): (-бесконечность;1)U(1;+бесконечность)\n\n");
		}
		else
		{
			printf("Функция не имеет области определения при данном значении x\n\n");
		}
#pragma endregion
	}
	else if (tn == 6)
	{
#pragma region 6. Вычислить значения логических выражений при следующих значениях логических переменных А=1, В=0, С=1
		int a=1, b=0, c=1;

		if (a < (a > b) < c)
		{
			printf("6a. true\n\n");
		}
		else
		{
			printf("6a. false\n\n");
		}
		if (a <c>(b<c))
		{
			printf("6b. true\n\n");
		}
		else {
			printf("6b. false\n\n");
		}
		if ((a < b>c)<a)
		{
			printf("6c. true\n\n");
		}
		else {
			printf("6c. false\n\n");
		}
#pragma endregion
	}
	else if (tn == 7)
	{
#pragma region 7. Записать логическое выражение определяющее, что число А является трехзначным.
		int a = -1000 + rand() % 10000;
		printf("a=%d\n\n", a);

		if (abs(a) >= 100 && abs(a) < 999)
		{
			printf("число а является трехзначным\n\n");
		}
		else
		{
			printf("число а не является трехзначным\n\n");
		}
#pragma endregion
	}
	else if (tn == 8)
	{
#pragma region 8. Записать условие, которое является истинным, когда только одно из чисел А, В и С меньше 45.
		int a, b, c;
		a = 1 + rand() % 100;
		b = 1 + rand() % 100;
		c = 1 + rand() % 100;
		printf("a=%d - b=%d - c=%d\n\n", a, b, c);

		if (a < 45 && b >= 45 && c >= 45)
		{
			printf("true\n\n");
		}
		else if (b < 45 && a >= 45 && c >= 45)
		{
			printf("true\n\n");
		}
		else if (c < 45 && b >= 45 && a >= 45)
		{
			printf("true\n\n");
		}
		else
		{
			printf("false\n\n");
		}
#pragma endregion
	}
	else if (tn == 9)
	{
#pragma region 9. Записать условие, которое является истинным, когда целое А не кратно трем и оканчивается нулем
		int a;
		a = -100 + rand() % 100;
		printf("a=%d\n\n", a);

		// для проверки раскомментить:
		/* printf("a=");
		 scanf("%d", &a);*/

		if (a % 3 != 0 && a % 10 == 0)
		{
			printf("true\n\n");
		}
		else
		{
			printf("false\n\n");
		}
#pragma endregion
	}
	else if (tn == 10)
	{
#pragma region 10. Записать логическое выражение, которое определяет, принадлежит ли число А интервалу  от -137 до -51 или интервалу от 123 до 55
		int a = -150 + rand() % 150;
		printf("a=%d\n\n", a);

		if ((a >= -137 && a <= -51) || (a >= 55 && a <= 123))
		{
			printf("число а принадлежит заданному интервалу\n\n");
		}
		else
		{
			printf("число а не принадлежит ни одному заданному интервалу\n\n");
		}

#pragma endregion
	}
	else
	{
		printf("Нет заданий\n\n");
	}
}