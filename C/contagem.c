#include <stdio.h>
#include <cs50.h>

void contar_de_zero_ate_n(int n);

int main(void)
{
    int numero_maximo = get_int("Digite até quanto quer contar: ");
    contar_de_zero_ate_n(numero_maximo);
}

void contar_de_zero_ate_n(int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("%i\n", i);
    }
}