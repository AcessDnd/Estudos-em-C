#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(void) { 
    setlocale(LC_ALL,"portuguese"); // Altera a linguagem! OBS: IMPORTANTE PARA ACENTOS!!!!

    printf("*****************************************\n"); 
    printf("* Bem vindo ao nosso jogo de advinha��o *\n"); 
    printf("*****************************************\n");

    int numerosecreto = 42;

    printf("O numero %d � o secreto. N�o conta pra ninguem\n", numerosecreto);

    int chute;

    printf("Qual � o seu chute? ");
    scanf("%d", &chute); // Diferente do 'printf', o comando 'scanf' fara com que o usuario digite, n�o a maquina! 
    // No scanf sempre deve se usar um & antes da variavel!

    printf("Seu chute foi %d \n", chute);

    if (chute == numerosecreto)
    {
        printf("Isso meu numero � este mesmo!!! ");
    } else {
        printf("Esse n�o � o meu");
    }
} 


