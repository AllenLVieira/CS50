#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Digite o número a ser analisado: ");
    if (n % 2 == 0)
    {
        printf("O número %i é par.\n", n);
    }
    else
    {
        printf("O número %i é impar.\n", n);
    }
}