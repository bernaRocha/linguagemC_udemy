#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

/*    printf("Ex1, pedir um n�mero inteiro e imprimir.\n");
    int inteiro;
    printf("Digite um n�mero inteiro: \n");

    scanf("%d", &inteiro);
    printf("O n�mero digitado foi: %d\n", inteiro);

    //Ex2 Digitar 3 valor e imprimir a soma
    int num1, num2, num3, total;
    total = num1 + num2 + num3;

    printf("Digite o primeiro n�mero: \n");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: \n");
    scanf("%d", &num2);
    printf("Digite o terceiro n�mero: \n");
    scanf("%d", &num3);

    scanf("%d", &total);

    printf("A soma dos tr�s n�meros digitados �: %d\n", total);
*/
    // Ex04 Ler um n real e imprimir o quadrado
    int numReal, quadrado;

    printf("Digite um n�mero real: \n");
    scanf("%d", &numReal);

    quadrado = numReal * numReal;

    printf("O quadrado do n�mero digitado( %d ) �: %d", numReal, quadrado);
    return 0;
}
