#include <locale.h>
#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES 
#define M_PI 3.14159265358979323846

int f(x)
{
	if (x >= 3 && x < 3) {
		return (pow(-x, 2) + 3 * x + 9);
	}
	else {
		return (x / pow(x, 3) - 6);
	}
}

void main()
{
	setlocale(LC_ALL, "RU");
	double x;
	double part;
	puts("Введите х:");
	scanf("%lg", &x);

	part = (x >= 3 && x < 3) ? (pow(-x, 2) + 3 * x + 9) : (x / pow(x, 3) - 6);

	printf("Ответ: %lg\n", part);
	system("pause");

	// при x = 5 --> 9
	// при х = 2 --> 19
	
}