#include <stdio.h>
#include <stdlib.h>

int calculus(int x, int y, char op)
{
    int result;

    if(op == '+')
    {
        result = x + y;
    }
    else if(op == '-')
    {
        result = x - y;
    }
    else if(op == '*')
    {
        result = x * y;
    }
    else if(op == '/')
    {
        result = x / y;
    }
    else
    {
        printf("Erro, operador inválido. Terminando programa...\n\n");
        exit(EXIT_FAILURE);
    }

    return result;
}

int entry()
{
    int x, y, total = 0;
    char op;
    
    printf("Digite um número, um operador(+, -, *, /) e outro número.\n");
    printf("Para receber o resultado aperte Enter.\n");
    
    while(1)
    {
        scanf("%d %c %d", &x, &op, &y);
        total += calculus(x, y, op);

        getchar();

        if(getchar() == '\n')
        {
            break;
        }
    }
    return total;
}

int main()
{
    printf("\nTotal: %d\n", entry());

    return 0;
}