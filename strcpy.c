#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main()
{

   char s1[100], s2[100], i;
    printf("Enter string s1: ");
    fgets(s1, sizeof(s1), stdin);


    for (i = 0; s1[i] != '\0'; i++){
        s2[i] = s1[i];
    }
        s2[i] = '\0';

        printf("New word of s2: %s", s2);
        return 0;



}
