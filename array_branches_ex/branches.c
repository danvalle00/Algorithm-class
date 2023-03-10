/* Crie um programa em C que leia do teclado um número que é o código de filial e em seguida leia 12 números que é o valor de vendas mensais no ano corrente, armazenando num vetor bidimensional, com filiais nas linhas e meses(12) nas colunas.
A seguir imprima o mês com mais vendas para cada filial.
A seguir imprima o mês com menos vendas para cada filial.
A seguir imprima a média vendas para cada filial. */

#include <stdio.h>
#define branches 5 // number of branches
#define months 12  // number of months

int main()
{
    float sells[branches][months], total_sell[months];
    int branch;
    printf("Enter the code for the branch: ");
    scanf("%d\n", &branch);

    for (int i = 0; i < branches; i++)
    {
        printf("Input the sells for the branch: %d", i + 1);
        for (int j = 0; j < months; j++)
        {
            printf("Month %d: ", j + 1);
            scanf("%f", &sells[i][j]);
            total_sell[j] += sells[i][j];
        }
    }
}