#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
/*
    // Ex 11 Leia uma velocidade em m/s e converta em km/h
    float mSeg, kHora;
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


    // Ex 14 Leia um �ngulo em graus e converta para radianos
    float graus, radianos;
    float pi = 3.141592;
    printf("Digite o �ngulo em graus a ser convertido em radianos: \n");
    scanf("%f", &graus);
    radianos = graus * pi / 180;
    printf("%.4f graus em radianos �: %.4f ", graus, radianos);

    // Ex 15 Leia um �ngulo em radianos e converta para graus
    float graus, radianos;
    float pi = 3.141592;
    printf("Apresente o �ngulo em radianos e converta para graus: \n");
    scanf("%f", &radianos);
    graus = radianos * 180 / pi;
    printf("%.2f radianos em graus �: %.2f", radianos, graus);

    // Ex 16 Converta polegadas para cent�metros
    float polegadas, centimetros;
    printf("Converta as polegadas em cent�metros: \n");
    scanf("%f", &polegadas);
    centimetros = polegadas * 2.54;
    printf("%.2f polegadas em cent�metros �: %.2fcm", polegadas, centimetros);

    // Ex 17 Converta cent�metros em polegadas
    float polegadas, centimetros;
    printf("Converta cent�metros em polegadas: \n");
    scanf("%f", &centimetros);
    polegadas = centimetros / 2.54;
    printf("%.1f cm em polegadas �: %.4f", centimetros, polegadas);

    // Ex 18 Converta um volume em m3 para litros
    float litros, m3;
    printf("Converta um volume em m3 para litros: \n");
    scanf("%f", &m3);
    litros = m3 * 1000;
    printf("%.2f m3 em litros d� %.2f L", m3, litros);

    // Ex 19 Converter litros em m3
    float litros, m3;
    printf("Converta um volume em litros para m3: \n");
    scanf("%f", &litros);
    m3 = litros / 1000;
    printf("%.2f litros em m3 d� %.3f L", litros, m3);
 */
    //Ex 20 Converta Kg para Libras
    float kg, lib;
    printf("Converta a quantida em Kg para Libras: \n");
    scanf("%f", &kg);
    lib = kg / 0.45359237;
    printf("%.2fKg em Libras d�: %.4fLb", kg, lib);
}
