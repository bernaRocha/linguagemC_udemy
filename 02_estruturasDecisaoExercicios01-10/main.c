#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
/*
    // Ex 01

    int num1, num2;
    printf("Registre o primeiro n�mero: \n");
    scanf("%d", &num1);
    printf("Agora o segundo n�mero: \n");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("O n�mero maior � o %d", num1);
    } else {
        printf("O n�mero maior � o %d", num2);
    }
*/
    // Ex 02
    int num1;
    float raiz;

    printf("Registre um n�mero parao o c�lculo da raiz: \n");
    scanf("%d", &num1);

    if(num1 > 0) {
        raiz = sqrt(num1);
        printf("A raiz quadrada de %d � %.2f", num1, raiz);
    } else {
        printf("N�mero inv�lido por ser negativo");
    }

    return 0;
}
