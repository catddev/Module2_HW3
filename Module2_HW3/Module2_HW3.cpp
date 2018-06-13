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

start:
	printf("task number:\t");
	scanf("%d", &tn);

	if (tn == 1)
	{
#pragma region 1. Îïðåäåëèòü, ÿâëÿåòñÿ ëè äàííîå öåëîå ÷èñëî ÷åòíûì
		int x = -100 + rand() % 200;
		printf("x=%d\n\n", x);

		if (x % 2 == 0)
		{
			printf("÷èñëî ÷åòíîå\n\n");
		}
		else
		{
			printf("÷èñëî íå÷åòíîå\n\n");
		}

#pragma endregion
	}
	else if (tn == 2)
	{
#pragma region 2. Çàïèñàòü óñëîâèå, êîòîðîå ÿâëÿåòñÿ èñòèííûì, êîãäà  öåëîå À êðàòíî äâóì èëè òðåì.
		int A = -100 + rand() % 200;
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
#pragma region 3. Çàïèñàòü óñëîâèå, êîòîðîå ÿâëÿåòñÿ èñòèííûì, êîãäà êàæäîå èç ÷èñåë  À è Â íå÷åòíîå.
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
#pragma region 4. Âû÷èñëèòü çíà÷åíèå ëîãè÷åñêèõ âûðàæåíèé ïðè ñëåäóþùèõ çíà÷åíèÿõ ëîãè÷åñêèõ ïåðåìåííûõ X=0, Y=0, Z=1
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
#pragma region 5. Çàïèñàòü ëîãè÷åñêîå âûðàæåíèå, îïèñûâàþùåå îáëàñòü îïðåäåëåíèÿ ôóíêöèè 
		// y = 2tg x;
		// ó = 3 / (x - 1).

		int x = -1000 + rand() % 2000;
		int n = -1000 + rand() % 2000;
		float p = 3.14;
		printf("x=%d, n=%d\n\n", x, n);

		if (x != p / 2 + p*n)
		{
			printf("Îáëàñòü îïðåäåëåíèÿ ôóíêöèè y=2tg x: ìíîæåñòâî âñåõ äåéñòâèòåëüíûõ ÷èñåë\n\n");
		}
		else
		{
			printf("Ôóíêöèÿ íå èìååò îáëàñòè îïðåäåëåíèÿ ïðè äàííîì çíà÷åíèè x\n\n");
		}
		if (x != 1)
		{
			printf("Îáëàñòü îïðåäåëåíèÿ ôóíêöèè y=3/(x-1): (-áåñêîíå÷íîñòü;1)U(1;+áåñêîíå÷íîñòü)\n\n");
		}
		else
		{
			printf("Ôóíêöèÿ íå èìååò îáëàñòè îïðåäåëåíèÿ ïðè äàííîì çíà÷åíèè x\n\n");
		}
#pragma endregion
	}
	else if (tn == 6)
	{
#pragma region 6. Âû÷èñëèòü çíà÷åíèÿ ëîãè÷åñêèõ âûðàæåíèé ïðè ñëåäóþùèõ çíà÷åíèÿõ ëîãè÷åñêèõ ïåðåìåííûõ À=1, Â=0, Ñ=1
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
#pragma region 7. Çàïèñàòü ëîãè÷åñêîå âûðàæåíèå îïðåäåëÿþùåå, ÷òî ÷èñëî À ÿâëÿåòñÿ òðåõçíà÷íûì.
		int a = -1000 + rand() % 10000;
		printf("a=%d\n\n", a);

		if (abs(a) >= 100 && abs(a) < 999)
		{
			printf("÷èñëî à ÿâëÿåòñÿ òðåõçíà÷íûì\n\n");
		}
		else
		{
			printf("÷èñëî à íå ÿâëÿåòñÿ òðåõçíà÷íûì\n\n");
		}
#pragma endregion
	}
	else if (tn == 8)
	{
#pragma region 8. Çàïèñàòü óñëîâèå, êîòîðîå ÿâëÿåòñÿ èñòèííûì, êîãäà òîëüêî îäíî èç ÷èñåë À, Â è Ñ ìåíüøå 45.
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
#pragma region 9. Çàïèñàòü óñëîâèå, êîòîðîå ÿâëÿåòñÿ èñòèííûì, êîãäà öåëîå À íå êðàòíî òðåì è îêàí÷èâàåòñÿ íóëåì
		int a;
		a = -100 + rand() % 200;
		printf("a=%d\n\n", a);

		// äëÿ ïðîâåðêè ðàñêîììåíòèòü:
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
#pragma region 10. Çàïèñàòü ëîãè÷åñêîå âûðàæåíèå, êîòîðîå îïðåäåëÿåò, ïðèíàäëåæèò ëè ÷èñëî À èíòåðâàëó  îò -137 äî -51 èëè èíòåðâàëó îò 123 äî 55
		int a = -150 + rand() % 300;
		printf("a=%d\n\n", a);

		if ((a >= -137 && a <= -51) || (a >= 55 && a <= 123))
		{
			printf("÷èñëî à ïðèíàäëåæèò çàäàííîìó èíòåðâàëó\n\n");
		}
		else
		{
			printf("÷èñëî à íå ïðèíàäëåæèò íè îäíîìó çàäàííîìó èíòåðâàëó\n\n");
		}

#pragma endregion
	}
	else
	{
		printf("no tasks\n\n");
	}
	goto start;
}
