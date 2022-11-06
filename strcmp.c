#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main()
{

    char s1[10] = "abc";
    char s2[10] = "abc";


  int flag=0,i=0;  // integer variables declaration

    while(s1[i]!='\0' &&s2[i]!='\0')  // while loop
    {
       if(s1[i]!=s2[i])
       {
           flag=1;
           break;
       }
       i++;
    }

   if(flag==0)
    return 0;
    else
    return -1;



}
