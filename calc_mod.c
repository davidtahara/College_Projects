#include <stdio.h>

void calc(float total, float num, char op)
{
    while (op != '\n')
    {
        scanf("%f", &num);
        scanf("%c", &op);

        if (op == '\n')
        {
            printf("%.2f\n", total);
            break;
        }

        if(op == '+')
        {
            total += num;
        }
        if(op == '-')
        {
            total -= num;
        }
        if(op == '*')
        {
            total *= num;
        }
        if(op == '/')
        {
            if (num == 0) 
            {
                printf("Divisão por zero\n");
                break;
            }
            total /= num;
        }   
    }
}

int main()
{
    float num, total = 0;
    char op = '+';

    calc(total, num, op);

    return 0;
}
//input deve ser feito da seguinte forma:
//10+
//2+
//3*
//0 + enter
//output = 36.00
//para terminar a operação é necessário somente digitar qualquer caracter e enter, sem operador algum