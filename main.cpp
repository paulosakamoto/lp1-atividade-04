#include <stdio.h>
#include <string.h>

int main()
{
    char nome[100];
    char sobrenome[100];
    char temporario[100] = "";
    printf("Digite seu nome e sobrenome:\n");
    scanf("%s%s", nome, sobrenome);
    strcpy(temporario, nome);
    strcpy(nome, sobrenome);
    strcpy(sobrenome, temporario);
    printf("Seu nome é: %s %s\n", nome, sobrenome);
    return 0;
}

