#include <stdio.h>
#include <string.h>


int main()
{
    char nomes[3][50];
    char nomePesquisa[50];
    int i;
    int encontrado = 0;

    // Entradas
    for (i = 0; i < 3; i++)
    {
        printf("Digite o nome da pessoa %d:\n", i + 1);
        scanf("%s", nomes[i]);
    }

    printf("Digite o nome a ser pesquisado:\n");
    scanf("%s", nomePesquisa);

    // Processamento
    for (i = 0; i < 3; i++)
    {
        if (strcmp(nomes[i], nomePesquisa) == 0)
        {
            printf("O nome %s foi encontrado na posição %d\n", nomePesquisa, i + 1);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado)
    {
        printf("O nome %s não consta no vetor\n", nomePesquisa);
    }

    return 0;
}
