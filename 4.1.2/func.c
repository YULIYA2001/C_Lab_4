#include <stdio.h>
#include <stdlib.h>
#define CHAR 32;

/* �������� ������� ������� ����� ,:; */
char check1(char symbol)
{
    if ((symbol == ',') || (symbol == ':') || (symbol == ';'))   /* ���� ������ ,:; */
    {
        symbol = getchar();                                      /* ���� ���������� ������� */
        if (symbol == ' ');                                      /* ���� ����. ������ �� ������ */
        else putchar(' ');                                       /* ������� ������*/
            putchar(symbol);                                     /* ������� ������ */
    }
    return symbol;
}

/* �������� ������� ������� � ��������� ����� ����� !?. */
char check2(char symbol)
{
    if ((symbol == '!') || (symbol == '?') || (symbol == '.'))   /* ���� ������ !?. */
    {
        symbol = getchar();                                      /* ���� 1 ������� */
        if (symbol == ' ')                                       /* ���� 1 ������ - ������ */
        {
            putchar(symbol);                                     /* ������� 1 ������ */
            symbol = getchar();                                  /* ���� 2 ������� */
            if ((symbol >= 'a') && (symbol <= 'z'))              /* ���� 2 ������ - �������� */
                symbol -= (char)CHAR;                            /* ������� 2 ������ ��������� */
        }
        else                                                     /* ���� 1 ������ - �� ������ */
        {
            putchar(' ');                                        /* ������� ������ */
            if ((symbol >= 'a') && (symbol <= 'z'))              /* ���� 1 ������ - �������� */
                symbol -= (char)CHAR;                            /* ������� 1 ������ ��������� */
        }
        putchar(symbol);                                         /* ������� ���������� ������ */
    }
    return symbol;
}

