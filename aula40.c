#include<stdio.h>

int main()
{

    struct horario 
    {
        int horas;
        int minutos;
        int segundos;
        double teste;
        char letra;
    };

    struct horario agora;

    agora.horas = 21;
    agora.minutos = 44;
    agora.segundos = 13;

    struct horario depois;

    depois.horas = agora.horas + 10;
    depois.minutos = agora.minutos;
    depois.teste = 50.55 / 123;
    depois.letra = 'a';

    printf("%i\n",depois.horas);
    printf("%i\n",depois.minutos);
    printf("%lf\n",depois.teste);
    printf("%c\n",depois.letra);

    return 0;
}
