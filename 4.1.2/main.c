#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "func.h"
#define CHAR 32;

int main()
{
    char symbol;

    printf("Enter text (in English):\n");
    symbol = getchar();
    /* �������� ������ ��������� ����� */
    if ((symbol >= 'a') && (symbol <= 'z'))
        symbol -= (char)CHAR;
    putchar(symbol);
    /* �������� �� ,:;!?. */
    while (symbol != '\n')
    {
        symbol = getchar();
        putchar(symbol);
        check1(symbol);     /* ��� ,:; */
        check2(symbol);     /* ��� !?. */
    }
    getch();
    return 0;
}
