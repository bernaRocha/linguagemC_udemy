#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Aula sobre vari�veis \ */
int main()
{
    setlocale(LC_ALL, "");
    //Declarando
    int idade; // inteiro ] declarando
    idade = 0; // inicializando
    // Fun��o para escrever algo entre as aspas
    printf("Hello world!\n");
    printf("Qual a sua idade? \n");

    //Receber dados, argumentos da entrada do teclado
    scanf("%d", &idade); //& do & dos ponteiros

    //Sa�da
    printf("Voc� tem %d anos.\n", idade);
    return 0;
}
