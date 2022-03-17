#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char resposta = get_char("Você é maior de idade (S ou N): ");
    if (resposta == 'S' || resposta == 's')
    {
        printf("Obrigado, você pode entrar.\n");
    }
    else if (resposta == 'N' || resposta == 'n')
    {
        printf("Desculpe, mas você não pode entrar.\n");
    }
}