// RiosRodriguezDaniel 372800
// 5-sep-23
/*
Programa en C que sirva para el juego del CHINCHAMPU (Piedra, Papel, Tijera) para 1 jugador y la computadora,
 (usar selección múltiple)
*/
// R.R.D_act3_3_932
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int ju, com;
    com = (rand() % 3) + 1;
    printf("Elije\npiedra=1\npapel=2\ntijera=3\n");
    scanf("%d", &ju);
    switch (com)
    {
    case 1:
        printf("Computadora elijio piedra\n ");
        break;
    case 2:
        printf("Computadora elijio papel\n ");
        break;
    case 3:
        printf("Computadora elijio tijera\n ");
        break;
    }

    switch (ju)
    {
    case 1:
        if (com == 1)
        {
            printf("Empate\n");
        }
        if (com == 2)
        {
            printf("Perdiste\n");
        }
        else
        {
            printf("Ganaste\n");
        }
        break;
    case 2:
        if (com == 2)
        {
            printf("Empate\n");
        }
        if (com == 1)
        {
            printf("Ganaste\n");
        }
        else
        {
            printf("Perdiste\n");
        }
        break;
    case 3:
        if (com == 3)
        {
            printf("Empate.\n");
        }
        if (com == 2)
        {
            printf("Ganaste\n");
        }
        else
        {
            printf("Perdiste\n");
        }
        break;
    }

    return 0;
}
