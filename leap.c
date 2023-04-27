#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool leap_bool(int x)
{
    bool leap;

    if(x % 4 == 0)
    {
        leap = true;
        if(x % 100 == 0)
        {
            leap = false;
            if(x % 400 ==0)
            {
                leap = true;
            }
        }
    }
    return leap;
}

int ndays(int x)
{
    if(leap_bool(x) == true)
        return 366;
    else
        return 365;
}

int dsmonth(int x, int y)
{
    if(leap_bool(x) == true)
    {
        if(y == 1)
        return 31;

        if(y == 2)
        return 29;

        if(y == 3)
        return 31;

        if(y == 4)
        return 30;

        if(y == 5)
        return 31;

        if(y == 6)
        return 30;

        if(y == 7)
        return 31;

        if(y == 8)
        return 31;

        if(y == 9)
        return 30;

        if(y == 10)
        return 31;
        
        if(y == 11)
        return 30;

        if(y == 12)
        return 31;
    }

    else if(leap_bool(x) == false)
    {
        if(y == 1)
        return 31;

        if(y == 2)
        return 28;

        if(y == 3)
        return 31;

        if(y == 4)
        return 30;

        if(y == 5)
        return 31;

        if(y == 6)
        return 30;

        if(y == 7)
        return 31;

        if(y == 8)
        return 31;

        if(y == 9)
        return 30;

        if(y == 10)
        return 31;
        
        if(y == 11)
        return 30;

        if(y == 12)
        return 31;
    }
}

float calcula_valor(float x, float y)
{
    float valor;
    valor = x * (y / 1000);

    return valor;
}

int main()
{
    float valor, peso;
    int x, y;

    printf("digite um ano para saber se é bissexto:");
    scanf("%d", &x);

    if(leap_bool(x) == true)
        printf("\n Ano bissexto!");
    else 
        printf("\n Ano não bissexto.");

    printf("\nnumero de dias no ano inserido:%d", ndays(x));

    printf("\ndigite agora um mês(de 1 a 12) para saber quantos dias o mesmo contém:");
    scanf("%d", &y);

    printf("\nquantidade de dias no mês inserido:%d", dsmonth(x, y));

    printf("\n\nDigite o peso da comida (em g):");
    scanf("%f", &peso);
    valor = calcula_valor(peso, 55.99);
    printf("\nValor a pagar: R$%.2f\n", valor);

    return 0;
}
