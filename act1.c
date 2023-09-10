// RiosRodriguezDaniel 372800
// 5-sep-23
/*
1.- Programa en C que lea 3 calificaciones calcule el promedio del alumno y desplegar:
 Si prom < 30 Repetir
 Si prom >=30 y prom <60 extraordinario
 Si prom >=60 y prom <70 suficiente
 Si prom >=70 y prom <80 Regular
 Si prom >=80 y prom <90 bien
 Si prom >=90 y prom <98 muy bien
 Si prom >=98 y prom <=100 excelente
 Si prom >100 Error en promedio
  (OPTIMIZADO)
*/
// R.R.D_act3_1_932
#include <stdio.h>
int main()
{
    float cali, cali2, cali3, prom;
    printf("Escriba las 3 calificaciones\n");
    scanf("%f", &cali);
    scanf("%f", &cali2);
    scanf("%f", &cali3);
    prom = (cali + cali2 + cali3) / 3;
    if (prom < 80)
    {
        if (prom < 60)
        {
            if (prom < 30)
            {
                printf("REPROBADO\n");
                printf("%f", prom);
                return 0;
            }
            else
            {
                printf("EXTRAORDINARIO\n");
                printf("%f", prom);
                return 0;
            }
        }
        else
        {
            if (prom < 70)
            {
                printf("SUFICIENTE\n");
                printf("%f", prom);
            }
            else
            {
                printf("REGULAR");
                printf("%f", prom);
            }
        }
    }
    else
    {
        if (prom < 98)
        {
            if (prom < 90)
            {
                printf("BIEN\n");
                printf("%f", prom);
            }
            else
            {
                printf("MUY BIEN\n");
                printf("%f", prom);
            }
        }
        else
        {
            if (prom <= 100)
            {
                printf("EXCELENTE\n");
                printf("%f", prom);
            }

            else
            {
                printf("ERROR\n");
                printf("%f", prom);
            }
        }
    }
}