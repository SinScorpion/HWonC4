#include <stdio.h>
#include <math.h>
//Павлушин Александр
void solution1();
void solution2();
void solution3();
void solution4();
void menu();
int main()
{
	int sel = 0;
	do
	{
		menu();
		scanf("%i", &sel);
		switch (sel)
		{
		case 1:
			solution1();
			break;
		case 2:
			solution2();
			break;
		case 3:
			solution3();
			break;
		case 4:
			solution4();
			break;
		case 0:
			printf("Bye-bye");
			break;
		default:
			printf("Wrong selected\n");
		}
	} while (sel != 0);
	return 0;
}
void solution1()
{
	printf("Solution 1\n");
	// Реализовать функцию перевода из десятичной системы в двоичную, используя рекурсию.	// Решение
	void dvoich(int x1)
	{
		int i, b;
		long c = 0;
		for (i = 0; x1 > 0; i++)
		{
			b = x1 % 2;
			x1 = (x1 - b) / 2;
			c += b * pow(10, i);
		}

		printf("\nDvoichnoe chislo: %d", c);
	}

	void main2()
	{
		int a;
		printf("Vvedite desyatichnoe chislo:");
		scanf("%d", &a);
		dvoich(a);
		getch();
	}
}
void solution2()
{
	printf("Solution 2\n");
	//Найти максимальное из четырех чисел. Массивы не использовать.	// Решение
	int x1, x2, x3, x4, max;
	
	printf("Input x1 ");
	scanf("%d", &x1);
	printf("Input x2 ");
	scanf("%d", &x2);
	printf("Input x3 ");
	scanf("%d", &x3);
	printf("Input x4 ");
	scanf("%d", &x4);

	max = x1;
	if (x2 > x1 && x2 > x3 && x2 > x4)
		max = x2;
	if (x3 > x1 && x3 > x2 && x3 > x4)
		max = x3;
	if (x4 > x1 && x4 > x3 && x4 > x2)
		max = x4;
	printf("MAX: %d\n", max);
	
}
void solution3()
{
	printf("Solution 3\n");
	//Написать программу обмена значениями двух целочисленных переменных:
	//a.с использованием третьей переменной;
	//b.* без использования третьей переменной.
	// Решение
	int a1, b1, c;
	printf("Input a ");
	scanf("%d", &a1);
	printf("Input b ");
	scanf("%d", &b1);

	a1 = a1 + b1;
	b1 = a1 - b1;
	a1 = a1 - b1;

	printf("a: %d\n", a1);
	printf("b: %d\n", b1);

	c = a1;
	a1 = b1;
	b1 = c;

	printf("a: %d\n", a1);
	printf("b: %d\n", b1);

	a1 = a1 * b1;
	b1 = a1 / b1;
	a1 = a1 / b1;

	printf("a: %d\n", a1);
	printf("b: %d\n", b1);
	


}
void solution4()
{
	printf("Solution 4\n");
	// Написать программу нахождения корней заданного квадратного уравнения.	// Решение
	
	
}
void menu()
{
	printf("1 - task1 - BMI\n");
	printf("2 - task2 - 4 max\n");
	printf("3 - task3 - ab => ba\n");
	printf("4 - task4 - a*x2+b*x+c=0\n");

	printf("0 - exit\n");
}
