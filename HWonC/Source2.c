//Павлушин Александр
//Задача 2
#include <stdio.h>
#include <locale.h>

#define arrMaxSize 100

void Print2(char* A, char* B, int a[arrMaxSize][arrMaxSize]);

int main(int argc, char* argv[])
{
	int str[arrMaxSize][arrMaxSize];
	char s1[] = "GEEKBRAINS";
	char s2[] = "GEEKMINDS";
	for (int i = 0; i < strlen(s1); i++)
		str[0][i] = 0;
	for (int i = 1; i <= strlen(s1); i++)
	{
		str[i][0] = 0;
		for (int j = 1; j <= strlen(s2); j++)
		{
			if (s1[i - 1] == s2[j - 1])
			{
				str[i][j] = str[i - 1][j - 1] + 1;
			}
			else
			{
				str[i][j] = str[i - 1][j] > str[i][j - 1] ? str[i - 1][j] : str[i][j - 1];
			}
			system("cls");
			Print2(s1, s2, str);
		}
	}
	return str[strlen(s1)][strlen(s2)];
	getch();
	return 0;
}
void Print2(char* A, char* B, int a[arrMaxSize][arrMaxSize])
{
	int i, j;
	printf("%8c", ' ');
	for (i = 0; i <= strlen(B); i++)
		printf("%4c", B[i]);
	printf("\n\n");
	for (i = 0; i <= strlen(A); i++)
	{
		printf("%4c", A[i - 1]);
		for (j = 0; j <= strlen(B); j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}
}

