#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    int num1, num2, sum, min, div, mul;

    char calculate;

    printf("Enter operator either +, -, / or *:  ");
    scanf("%c", &calculate);

    printf("Enter two numbers to calculate: ");
    scanf("%d %d", &num1, &num2);

    switch(calculate)
    {
        case '+' : sum = num1 + num2;
        printf("\nThe sum of the %d and %d = %d\n", num1, num2, sum);
        break;

        case '-' : min = num1 - num2;
        printf("\nThe remover of %d from %d = %d\n", num1, num2, min);
        break;

        case '/' : div = num2 / num1;
        printf("\nThe division of %d and %d = %d\n", num1, num2, div);
         break;

        case '*' : mul = num1 * num2;
        printf("\nThe multiplication of %d and %d = %d\n", num1, num2, mul);
         break;

        default : printf("\nPlease pick the correct operator and try again\n THANKS!!!\n");
         break;
    }

    printf("\n Thanks for using our software \n");

    return 0;
}
