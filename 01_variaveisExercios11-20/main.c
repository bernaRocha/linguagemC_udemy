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
*/
    // Ex 12 Leia uma dist�ncia em milhas e converta para kilometros
    float milhas, kilometros;
    printf("Digite a dist�ncia em milhas a ser convertida: ");
    scanf("%f", &milhas);
    kilometros = 1.61 * milhas;
    printf("A dist�ncia %.1f milhas em kilometros �: %.1f", milhas, kilometros);

}
