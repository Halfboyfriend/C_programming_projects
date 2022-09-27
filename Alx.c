#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int maxNum = 60;
    int randomNum;

    srand(time(NULL));
    randomNum = rand() % maxNum;

    printf("Guess a number from 0 - %d\n", maxNum);
    int num;

    scanf("%d", &num);

    printf("You have successfully geussed number %d\n", num);



    if (num == randomNum)
    {
        printf("WOOAAAH!!!, You won a $100\n");


    }else
    {
               if (num > maxNum)
    {
        printf("You didnt read the instructions, please try again!!!\n");
    }
    else if (num <= maxNum)
    {
         printf("OOOPSSS!!! YOU LOST IT \n ---------------------------------- \n Try again\n");


    }


    }


    printf("Thanks for playing\n");
    return 0;
}


