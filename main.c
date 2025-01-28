#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, num2;
    char operator;

    printf("Digite um numero: ");
    scanf(" %d", &num);

    printf("Operacao: ");
    scanf(" %c", &operator);

    printf("Digite outro numero: ");
    scanf(" %d", &num2);

    switch (operator)
    {
    case '+':
        printf("Resultado: %d\n", num + num2);
        break;
    case '-':
        printf("Resultado: %d\n", num - num2);
        break;

    case '*':
        printf("Resultado: %d\n", num * num2);
        break;

    case '/':
        printf("Resultado: %d\n", num / num2);
        break;

    default:
        printf("Operação inválida!\n");
        break;
    }

    return 0;
}