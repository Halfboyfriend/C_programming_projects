#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdarg.h>
#include <string.h>
#include <conio.h>

//POINTERS IN C
int main(void)
{
    //WILD POINTER
    //points to any random memory allocation
    int *ptr;//uninitialized pointer leading to gabage value = WILD POINTER
   // char *p;
    ptr = (int *) malloc(sizeof(int)); //asigning memory
    *ptr = 10;
    printf("%d", *ptr);


 /*   //DANGLING POINTER
    int *ptr = (int *)malloc(sizeof(int)); //allocating memoryu to pointer

    *ptr = 10;
    printf("%d", *ptr);

    free(ptr); //free(moves from consumed to free losing its address) Dangling

    //Dangling Pointer pointing to a freed memory
    //DONT LEAVE ANY POINTER DANGLING

    ptr = NULL;
    if (ptr == NULL)
    {
        printf("Cant be dereference");
    }
    else
    {
        //state your code
    }
    //EXAMPLE

    int* f(){

        int a = 5;
        return &a;
    }
    int main(void)
    {
        int *ptr = &a;

        printf("%d", *ptr);
    }

*/

  /*  //NULL POINTER

   // int *ptr; //pointer uninitialize (wild pointer) resulting to gabage value

        int *ptr = NULL; // or 0
    //pointer points to 0 and you cannot derefference null pointer because it points to nothing but only have NULL value

        printf("%d", ptr);
    //ALWAYS CHECK IF POINTER IS NULL

    if (ptr == NULL)
        {
            printf("\nPointer is NULL");

        }
        else
            {
                //do whatever you want.
            }


*/



   /* //VOID POINTER (pointer of void type, no associative data type)

   // int *p // XXXX wrong in void

   int a = 5;
   char c = 'd';
   float f = 2.5;
   void *vp; //declaration of void pointer and can store address of any data type (int, char float) by type casting

    vp = &a;

   printf("%d", *(int *)vp);

   vp = &c;
   printf("\n%c", *(char *)vp);

   vp = &f;
   printf("\n%f", *(float *)vp); */













   /* char str[] = "welcome to jenny's lectures";
    char *ptr = str;

    printf("%c", *ptr); // = w

    printf("\n%c", *(ptr++ +1)); // e

    printf("\n%c", *((ptr-- +5)-1)+3); // p

    printf("\n%c", *(++ptr +10)-32); // J

    printf("\n%c %c %c", *ptr, *++ptr, *--ptr); // e e w */


  /* const int a = -11;
    int *p = &a;

     *p = 10;

    printf("%d", a);
*/




  /*  //POINTERS PROBLEM
    int a[] = {10,11,-1,56,64,5,4};
    int *p, *q;
    p = a;

    q = &a[0] + 3; // q = &a[3];

   // printf("Value of p = %d\n", *q);

    printf("output right to left = %d %d %d", (*p)++, (*p)++, *(++p)); // 12 11 11

    printf("\n%d", *p); // value of p at (11) address is now 13
      printf("\n%d", (*p)++);
      printf("\n%d", (*p)++);

      q--; // q is now -1

      printf("\n%d", *q);
      printf("\n%d", (*(q+2))--); // 64

       printf("\n%d", *(p+2)-2); // 54

        printf("\n%d", *(p++ -2) -1); // -1 */


  /*  printf("Value of p = %d\n", *p); // = 10

    printf("output rigth to left = %d %d %d", (*p)++, *p++, *p++ ); //POst incrememt

     printf("\nValue of p = %d\n", *p);

        q = p + 3; // = 5

    printf("\n%d", *q - 3);
     printf("\n%d", *--p + 5);
      printf("\n%d", *p + *q); */











    /*
    //INCREMENT AND DECREMENT
    int a[] = {3,2,6,7,0,50};
    int *p;
    p = &a[3];

   //  printf("Value of p before incrementing is %d", *++p);

   // p++; //P WILL POINT TO THE NEXT ELEMENTS ADD

//printf("\nValue of p after incrementing is %d, %d", *p++, *p++);

 //   p = p + 1;

   //  printf("\nValue of p after incrementing X2 is %d", *p);

   //DECREMENT
     // printf("Reducing thrice = %d %d %d", *--p, *--p, *--p);

     printf("Reducing thrice = %d", --(*p));

*/

  /*  //SUBTRACTION IN POINTER (YES)
    int a[] = {2,4,3,0,-7};
    int *p = &a[0];
    int *q = &a[3];

    //elements apart
    //int sum = p - q; //differeces between two pointer variables
   // q = q - 2;
    printf("Sub %d", q-p);
     printf("\nSub %d", p-q);
     printf("\nvalue %d", *q);
   q = q - 2;
     printf("\nvalue %d", *q);
    p = p + 2;

     printf("\ndiff %d", q-p);

     q = q - 2;
      printf("\n value %d", *q); */
















  /*  //POINTER ARITHMETIC
    //ADDITION (NO)
    int a[5] = {8, 1, -1, 10, 15};
    int *p = &a[0];

    //You cant add two pointers eg *p + * q = XXX(error);

    printf("\nall = %d", *p);

    p++;
    *p = 20;

    printf("\nal = %d", a);
    printf("\nal = %d", *p); */



 /*  //POINTER TO A POINTER(DOUBLE POINTER)
    //Pointer who stores address of other pointer
    int a = 10;
    int *p = &a;

    int **q = &p;
    int ***x = &q;
    *p = 25;

    printf("\nA = %d, %d, %d, %d", a, *p, **q, ***x);*/


  /*  //POINTER ASSIGNMENT
    int a = 10, b = 11;
    int *p, *q;

    p = &a;
    q = &b;
    printf("add2 %d\n", *q);
    *q = *p;

    printf("\nadd of a is: %d , %d , %d", a, *p, *q);*/

  /*  int n = 10, a = 15, c;
    int *p, *q;

    p = &n;
    q = &a;

    c = *q;

   // printf("add of a is: %x", &n);
   // printf("\nadd2 %x", p);
    // printf("\nadd3  %x", &p);

     printf("C = %d", c);
      printf("\n Q = %d", *q);*/

     return 0;
}

