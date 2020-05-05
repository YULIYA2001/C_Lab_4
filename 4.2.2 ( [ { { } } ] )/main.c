#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "func.h"
#define N 200

int main(void)
{
    char string[N];
    int i;
    FILE *fp;                               /* ��������� �� ���� */

    fp = fopen("File.txt", "r+");
    if (!fp)
        exit(1);                            /* �������� �� �������� ����� */
    while (fgets(string, N, fp) != NULL);   /* ������ ����������� ����� � ������ string*/
    printf("Text from file:\n%s\n", string);
    /* �������� �� ����������� ������ */
    CheckParentheses(string);
    /* ������ ������ ������ */
    Replace(string);
    printf("Corrected text:\n%s", string);
    /* ���������� � ���� ����������� ������ */
    fputs("\nCorrected text:\n", fp);
    fputs(string, fp);
    fclose(fp);
    getch();
    return 0;
}

