// RiosRodriguezDaniel 372800
// 5-sep-23
/*
Programa en C que lea 3 números y desplegar el número del medio (usar AND o OR)
*/
// R.R.D_act3_5_932
#include <stdio.h>
int main()
{
    int num1, num2, num3, medio;
    printf("ingresa los 3 numeros\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

   if (num1 >= num2 && num1 <= num3)
    {
        medio = num1;
    }
    if (num2 >= num1 && num2 <= num3)
    {
        medio = num2;
    }
    if (num3 >= num1 && num3 <= num2)
    {
        medio = num3;
    }

    printf("El numero del medio es: %d\n", medio);

    return 0;
}

