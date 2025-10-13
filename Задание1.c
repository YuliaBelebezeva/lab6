#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "RU");

    int years;
    puts("Введите год");
    scanf("%d", &years);

    if ((years % 4 == 0 && years % 100 != 0) || years % 400 == 0) {
        puts("Год високосный");
    }
    else {
        puts("Год не високосный");
    };
    system("pause");
}