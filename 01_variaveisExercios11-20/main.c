#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    // Ex 11 Leia uma velocidade em m/s e converta em km/h
/*    float mSeg, kHora;
    printf("Digite a velocifdade em m/s a ser convertida em km/h. \n");
    scanf("%f", &mSeg);
    kHora = mSeg * 3.6;
    printf("A velocidade %.1f m/s em k/h �: %.1f", mSeg, kHora);

    // Ex 12 Leia uma dist�ncia em milhas e converta para kilometros
    float milhas, kilometros;
    printf("Digite a dist�ncia em milhas a ser convertida: ");
    scanf("%f", &milhas);
    kilometros = 1.61 * milhas; // Est� arredondado
    printf("A dist�ncia %.1f milhas em kilometros �: %.1f", milhas, kilometros);

    // Ex 13 Leia uma dist�ncia em kilometros e converta para milhas
    float milhas, kilometros;
    printf("Digite a dist�ncia em kilometros a ser convertida em milhas: \n");
    scanf("%f", &kilometros);
    milhas = kilometros / 1.61 ; // Est� arredondado
    printf("A dist�ncia %.1f kilometros em milhas �: %.1f", kilometros, milhas);
*/

    // Ex 14 Leia um �ngulo em graus e converta para radianos
    float graus, radianos;
    float pi = 3.141592;
    printf("Digite o �ngulo em graus a ser convertido em radianos: \n");
    scanf("%f", &graus);
    radianos = graus * pi / 180;
    printf("%.4f graus em radianos �: %.4f ", graus, radianos);
}
