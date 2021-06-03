#include<stdio.h>

int main()
{
    struct horario
    {
        int horas;
        int minutos;
        int segundos;
    };

    struct horario agora;

    agora.horas = 21;
    agora.minutos = 39;
    agora.segundos = 13;

    printf("%i:%i:%i\n",agora.horas, agora.minutos, agora.segundos);

    return 0;
}
