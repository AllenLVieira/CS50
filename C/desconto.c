#include <cs50.h>
#include <stdio.h>

float receber_valor_descontado(float preco_original, float desconto);

int main(void)
{
    float preco_original = get_float("Digite o preço do produto: ");
    float desconto = get_float("Digite o valor do desconto (ex: 15 = 15/100): ");
    float preco_com_desconto = receber_valor_descontado(preco_original, desconto);
    printf("O preço de venda com desconto é R$ %.2f\n", preco_com_desconto);
}

float receber_valor_descontado(float preco_original, float desconto)
{
    return preco_original * (1 - desconto / 100);
}