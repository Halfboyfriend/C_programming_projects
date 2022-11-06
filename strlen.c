
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>




int main()
{

       char str[50];
    int i, count = 0;

    printf("Enter Your Name: ");

    gets(str);

    //for (i = 0; str[i] != '\0'; i++, count++)
    i = 0;
    while(str[i] != '\0')
    {
       i++;
       count++;

    }
    printf("The lenght is = %d", count);
     printf("\nSecond leght= %d", i);
          printf("\nThird letter is= %c", str[2]);
    return 0;
}
