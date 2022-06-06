#include <io.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

FILE* f;  //указатель на файл
int main()
{
    char str[255]; //выделяем место под массив
    char txt[] = ".txt"; //расширение файла
    int j;
    printf("Enter loading file name: ");
    scanf("%s", &str);//спрашиваем имя файла
    strcat(str, txt); //объединяем имя с расширением
    printf("%s", &str);  //печатаем имя файла
    double df;
    int i = 0;
    if (f = fopen(str, "r"))
    {

        printf("\n");
        while (!feof(f))
        {
            fscanf(f, "%f", &df); i++;  //пробегаемся по всему файлу записываем
        }
        fseek(f, 0L, SEEK_SET);
        float a[i];
        int b[i];
        i = 0;

        while (!feof(f))
        {
            fscanf(f, "%fl", &a[i]);
            i++;
        }

        for (j = 0; j < i; j++)
        {
            printf("\n%f", a[j]);
        }

        fclose(f);
        int k = 1, l = 0;
        for (j = 0; j < i - 1; j++)
        {
            if (a[j] > a[j + 1])
                k++;
            else
            {
                if (k > 1)
                {
                    b[l] = k; l++;
                }
                k = 1;
            }
        }

        for (j = 0; j < l; j++)printf("\n\n%d", b[j]);

        printf("\n\nEnter  file to save name: ");
        scanf("%s", &str);
        strcat(str, txt);
        printf("%s", &str);
        f = fopen(str, "w");
        for (j = 0; j < l; j++)fprintf(f, "%d ", b[j]);
        fclose(f);
        return 0;
    }
    else { printf(" \n this file not exists!"); }



    return 0;
}