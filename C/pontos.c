#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int pontos = get_int("Digite a quantidade de pontos que você perdeu: ");
    if (pontos < 2)
    {
        printf("Você perdeu menos pontos do que eu!\n");
    }
    else if (pontos > 2)
    {
        printf("Você perdeu mais pontos do que eu!\n");
    }
    else
    {
        printf("Nós perdemos a mesma quantidade de pontos!\n");
    }
}