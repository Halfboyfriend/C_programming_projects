#include <stdio.h>
#include <stdlib.h>
/**
 * Function that get numbers from user and print the max and min num
 */



int main()
{
     int x,y;

    printf("Enter the two num to check max and min: ");
    scanf("%d %d", &x, &y);

    printf("The maximum num is %d", max(x,y));
    putchar('\n');
     printf("The minimum num is %d", min(x,y));

    return 0;
}
   


//Function to calculate the max num
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

//Function to calculate the min num

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
