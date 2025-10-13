#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()
{
    setlocale(LC_ALL, "RU");
    int tot_sec;

    printf("������� ����� � ��������: ");
    scanf("%d", &tot_sec);

    int hours = tot_sec / 3600;
    int min = (tot_sec % 3600) / 60;
    int sec = tot_sec % 60;

    printf("���������: ");

    if (hours > 0) {
        // ���� ���� - ������� ������ ������
        printf("%d ��� %d ��� %d ���\n", hours, min, sec);
    }
    else {
        // ����� ��� - ������� ������ ������ � �������
        printf("%d ��� %d ���\n", min, sec);
    }
    //����������� �������:
    //125 ������ -> 2 ��� 5 ���
    //3599 ������ -> 59 ��� 59 ���
    //3600 ������ -> 1 ��� 0 ��� 0 ���
    //3661 ������ -> 1 ��� 1 ��� 1 ���
    //7200 ������ -> 2 ��� 0 ��� 0 ���
    //7265 ������ -> 2 ��� 1 ��� 5 ���
    system("pause");
    return 0;
}