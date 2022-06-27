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

    // Ex 03

    int num1, quadrado;
    float raiz;

    printf("Registre o n�mero para o c�lculo: \n");
    scanf("%d", &num1);

    if (num1 > 0) {
        raiz = sqrt(num1);
        printf("O n�mero %d � positivo, sua raiz �: %.4f", num1, raiz);
    } else {
        quadrado = num1 * num1;
        printf("O n�mero %d � negativo, o quadrado dele �: %d", num1, quadrado);
    }

    // Ex 04
    int num1, quadrado;
    float raiz;

    printf("Registre o n�mero para os c�lculos: \n");
    scanf("%d", &num1);

    if (num1 > 0) {
        quadrado = num1 * num1;
        raiz = sqrt(num1);
        printf("O quadrado de %d � %d\n", num1, quadrado);
        printf("A raiz de %d � %.7f", num1, raiz);
    }

    // Ex 05
    int numero;
    printf("Registre o n�mero para verifica��o: \n");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O n�mero %d � par.", numero);
    } else {
        printf("O n�mero %d � �mpar.", numero);
    }

    // Ex 06
    int num1, num2, diferenca;
    printf("Registre dois n�meros: \n");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2) {
        printf("%d � maior que %d \n", num1, num2);
        diferenca = num1 - num2;
        printf("A diferen�a entre eles �: %d", diferenca);
    } else {
        printf("%d � maior que %d \n", num2, num1);
        diferenca = num2 - num1;
        printf("A diferen�a entre eles �: %d", diferenca);
    }

    // Ex 07
    int num1, num2;
    printf("Registre dois n�meros para compara��o: \n");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2) {
        printf("O n�mero maior � o %d", num1);
    } else if (num2 > num1) {
        printf("O n�mero maior � o %d", num2);
    } else {
        printf("N�meros iguais. (%d)", num1);
    }

    // Ex 08

    float nota1, nota2, media;


    printf("Digite a primeira nota do aluno: \n");
    fflush( stdout );
    scanf("%f",&nota1);


    printf("Digite a segunda nota do aluno: \n");
    fflush( stdout );
    scanf("%f",&nota2);

    if((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){
        media = (nota1 + nota2) / 2;
        printf("A m�dia do aluno � %.2f", media);
    } else if (nota1 || nota2 > 10 && nota1 || nota2 < 0) {
        printf("N�meros inv�lidos, por favor tente novamente.");
    }

    // Ex 09
    float salario, totalEmprestimo, prestacaoEmprestimo;
    printf("Registre  seu sal�rio. \n");
    fflush( stdout );
    scanf("%f", &salario);

    printf("Quanto deseja de emprestimo para que seja pago em 12 vezes? \n");
    fflush( stdout );
    scanf("%f", &totalEmprestimo);

    prestacaoEmprestimo = totalEmprestimo  / 12;

    if(prestacaoEmprestimo > (0.2 * salario)) {
        printf("O empr�stimo n�o pode ser condedido.");
    }
    else {
        printf("Empr�stimo aprovado.");
    }

*/
    //Ex 10
    char genero;
    float altura, pesoIdeal;

    printf("Verifique aqui seu peso ideal. \n");
    printf("Informe seu g�nero [M/m ou F/f]: \n");
    scanf("%c", &genero);

    printf("Informe sua altura. \n");
    getchar();
    scanf("%f", &altura);

    if(genero == 'M' || genero == 'm'){
        pesoIdeal = (72.7 * altura) - 58.0;
        printf("Sendo homem seu peso ideal tendo %.2f de altura � %.2fKg.", altura, pesoIdeal);
    }
    else if(genero == 'F' || genero == 'f'){
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("Sendo mulher seu peso ideal tendo %.2f de altura � %.2fKg.", altura, pesoIdeal);
    }

    return 0;
}
