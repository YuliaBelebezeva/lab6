#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//double f(double x)
//{
//    if (x >= 3) {
//        return pow(x, 2) + 3 * x + 9;
//    }
//    else {
//        return x / (pow(x, 3) - 6);
//    }
//}

int main()
{
    setlocale(LC_ALL, "RU");
    double x;
    puts("Введите х:");
    scanf("%lg", &x);

    double result = f(x);
    printf("Ответ: %lg\n", result);

    system("pause");
    return 0;
    system("pause");
    //3 --> 27
    // 2 --> 1
    // 1 --> - 0.2
    // 0 --> 0
}
