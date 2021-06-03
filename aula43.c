#include<stdio.h>

int main()
{
    struct horario 
    {
        int horas;
        int minutos;
        int segundos;

    } agora = {22,38,13};

    //struct horario agora = {22,39,13}

    //struct horario agora = {.horas = 30, .minutos = 20, .segundos = 10};

    printf("%i:%i:%i\n",agora.horas,agora.minutos,agora.segundos);

    return 0;
}
