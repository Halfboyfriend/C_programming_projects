#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main()
{
 char s1[100] = "Hello ";
 char s2[50] = "World!";

 int l, j;

 l = 0;

 while (s1[l] != '\0')
 {
     ++l;
 }

    for (j = 0; s2[j] != '\0'; ++j, ++l)
    {
        s1[l] = s2[j];
    }

    s1[l] = '\0';

    printf("After concatenation: ");
    puts(s1);

    return 0;
}
