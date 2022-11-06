#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int num, i, *ptr;

    printf("Enter the number of values: ");

    scanf("%d", &num);

    ptr = (int*) malloc (num*sizeof(int));

    printf("Enter each values: ");

    for (i = 0; i < num; i++)
    {
        scanf("%d", (ptr + i));
    }

     printf("The enter values are : ");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", *(ptr + i));
    }

    free(ptr);
}
