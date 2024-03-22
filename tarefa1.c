#include <stdio.h>

int main(){

    for(;;){

    printf("(1)Soma \n(2)Subtração \n(3)Multiplicação \n(4)Divisão \n(5)Resto \n(0)Para sair");

    int menu;
    scanf("%d", &menu);

    float num1 = 0;
    float num2 = 0;
    float valor = 0;


    

    switch (menu)
    {
    case 1:
        printf("Digite um número e em seguida seu somador:\n");

        scanf("%f", &num1);
        scanf("%f", &num2);

        valor = num1 + num2;

        printf("%.2f", valor);
        break;
    
    case 2:
    printf("Digite um número e em seguida seu subtrator:\n");

        scanf("%f", &num1);
        scanf("%f", &num2);

        valor = num1 - num2;

        printf("%.2f", valor);
    break;

    case 3:

    printf("Digite um número e em seguida seu multiplicador:\n");

        scanf("%f", &num1);
        scanf("%f", &num2);

        valor = num1 * num2;

        printf("%.2f", valor);

    break;

    case 4:

    printf("Digite um número e em seguida seu divisor:\n");

        scanf("%f", &num1);
        scanf("%f", &num2);

        valor = num1 / num2;

        printf("%.2f", valor);
    
    break;
    
    case 5:

    printf("Digite um número e em seguida o numero para se fazer o resto:\n");

    int num3, num4;

        scanf("%d", &num3);
        scanf("%d", &num4);

        valor = num3 % num4;

        printf("%.2f", valor);

    break;

    default:
        printf("O programa parou");
        return 0;
        break;
    }
    }
}