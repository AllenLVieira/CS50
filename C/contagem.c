#include <stdio.h>

int main(void)
{
    int i = 1;
    printf("Usando while:\n");
    while (i <= 3)
    {
        printf("%i\n", i);
        i++;
    }
    printf("Usando for:\n");
    for (int j = 1; j <= 3; j++)
    {
        printf("%i\n", j);
    }
}