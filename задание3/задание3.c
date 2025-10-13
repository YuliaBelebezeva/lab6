#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()
{
    setlocale(LC_ALL, "RU");
    int tot_sec;

    printf("¬ведите врем€ в секундах: ");
    scanf("%d", &tot_sec);

    int hours = tot_sec / 3600;
    int min = (tot_sec % 3600) / 60;
    int sec = tot_sec % 60;

    printf("–езультат: ");

    if (hours > 0) {
        // ≈сть часы - выводим полный формат
        printf("%d час %d мин %d сек\n", hours, min, sec);
    }
    else {
        // „асов нет - выводим только минуты и секунды
        printf("%d мин %d сек\n", min, sec);
    }
    //контрольные примеры:
    //125 секунд -> 2 мин 5 сек
    //3599 секунд -> 59 мин 59 сек
    //3600 секунд -> 1 час 0 мин 0 сек
    //3661 секунд -> 1 час 1 мин 1 сек
    //7200 секунд -> 2 час 0 мин 0 сек
    //7265 секунд -> 2 час 1 мин 5 сек
    system("pause");
    return 0;
}