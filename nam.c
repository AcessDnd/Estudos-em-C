#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "Portuguese");

    char(Alicia);
    int resposta;
    printf("Qual o nome da sua alma gemea? ");
    scanf("%d", resposta);

    if (resposta == Alicia)
    {
        printf("N�o voc� est� errado");
    } else {
        printf("Sim � ela mesmo, diga que a ama agora!");
    }
}