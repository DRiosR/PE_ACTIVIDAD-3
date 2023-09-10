// RiosRodriguezDaniel 372800
// 5-sep-23
/*
Programa en C que lea 3 números y despegarlos en forma ascendente (usar AND o OR)
*/
// R.R.D_act3_6_932
#include <stdio.h>

int main()
{
    int num1, num2, num3,medio,mayor,menor;
    printf("ingresa los 3 numeros\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);


    //menor
if (num1 <= num2 && num1 <= num3)
    {
        menor=num1;
    }
    if (num2 <= num1 && num2 <= num3)
    {
        menor=num2;
    }
     if (num3 <= num1 && num3 <= num2)
    {
        menor=num3;
    }
    //medio
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
//mayor
    if (num1 >= num2 && num1 >= num3)
    {
        mayor=num1;
    }
    if (num2 >= num1 && num2 >= num3)
    {
        mayor=num2;
    }
     if (num3 >= num1 && num3 >= num2)
    {
        mayor=num3;
    }
    printf("%d , %d, %d\n", menor,medio,mayor);
    return 0;

}