#include <stdio.h>
#include <stdlib.h>



int sum(int num1, int num2);
int sub(int s1, int s2);
int mul(int m1, int m2);

int main()
{
    int a = 100;
    int b = 40;

    printf("The sum of the numbers are: %d", sum(a,b));
     printf("\nThe subtraction of the numbers are: %d", sub(a,b));
     printf("\nThe multilplication of the numbers are: %d", mul(a,b));

     getchar();

    return 0;

}


int sum(int num1, int num2){

    int sum;

    sum = num1 + num2;

    return sum;

}

int sub(int s1, int s2){

    int sub;

    sub = s1 - s2;

    return sub;

}

int mul(int m1, int m2){
    int mul;

    mul = m1 * m2;
    return mul;
}

/*
void sum()
{
    int a,b,sum=0;
    printf("Input two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a+b;
    printf("The sum is: %d", sum);
}


int main()
{

    sum();
    return 0;

}

*/
