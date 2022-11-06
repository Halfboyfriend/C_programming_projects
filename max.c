#include <stdio.h>
#include <stdlib.h>
/**
 * Function that get numbers from user and print the max and min num
 */


int max(int a, int b)
{
    if(a > b)
    {
        return a;
    } else
    {
        return b;
    }
}
int min(int a, int b)
{
    if(a<b)
    {
        return a;
    } else
    {
        return b;
    }
}

int main()
{
    int x,y;

    printf("Enter the two num to check max and min: ");
    scanf("%d %d", &x, &y);

    printf("The maximum num is %d"
