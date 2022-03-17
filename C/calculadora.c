#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long m = get_long("Digite o valor de m: ");
    long n = get_long("Digite o valor de n: ");
    printf("O resultado da soma é: %li\n",m + n);
}