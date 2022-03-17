#include <cs50.h>
#include <stdio.h>

int main(void)
{
    const int PONTO_REFERENCIA = 2;
    int pontos = get_int("Digite a quantidade de pontos que você perdeu: ");
    if (pontos < PONTO_REFERENCIA)
    {
        printf("Você perdeu menos pontos do que eu!\n");
    }
    else if (pontos > PONTO_REFERENCIA)
    {
        printf("Você perdeu mais pontos do que eu!\n");
    }
    else
    {
        printf("Nós perdemos a mesma quantidade de pontos!\n");
    }
}