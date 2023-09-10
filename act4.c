// RiosRodriguezDaniel 372800
// 5-sep-23
/*
Programa en C que lea 3 números y desplegar cuál número es el mayor (usar AND o OR)
*/
// R.R.D_act3_4_932
#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("ingresa los 3 numeros\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

   
    if (num1 >= num2 && num1 >= num3)
    {
        printf("El numero mayor es=%d\n", num1);
    }
    if (num2 >= num1 && num2 >= num3)
    {
        printf("El numero mayor es=%d\n", num2);
    }
     if (num3 >= num1 && num3 >= num2)
    {
        printf("El numero mayor es=%d\n", num3);
    }
    return 0;
}
