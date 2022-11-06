#include <stdio.h>
#include <stdlib.h>


int main(){

      FILE *fp = NULL;
    char str[500] = "Hello, This is a new file";
    char ch;

    long int pos;
     fp = fopen("alx.txt" ,"r");

   if(fp == NULL){
    printf("Error While creating file");
   } else{

        printf("file was created successfully....");
        exit(1);
   }

    //ftell()= tells the position of a file and lenght of a file
   pos = ftell(fp);

   printf("%d", pos);
   fseek(fp, 7, SEEK_SET);
   printf("%d", ftell(fp));















 /*   //w+ mode mainly for writing purpose

     fp = fopen("alx.txt" ,"r");

   if(fp == NULL){
    printf("Error While creating file");
   } else{

        printf("file was created successfully....");
   }
    //fseek(file-pointer, offset, position)--> returns int
    //position= SEEK_SET, SEEK_CUR, SEEK_END

    fseek(fp, 7, SEEK_SET);
   // ch = fgetc(fp);

   // printf("%c", ch);

    fgets(str, 15, fp);

   printf("%s", str);

    fseek(fp, -5, SEEK_END);
   // ch = fgetc(fp);

   // printf("%c", ch);

    fgets(str, 10, fp);

   printf("\n%s", str);

*/









 /*  fp = fopen("alx.txt" ,"a");

   if(fp == NULL){
    printf("Error While creating file");
   } else{

        printf("file was created successfully....");
   }
       printf("\nInput data to be stored in the file: ");
        gets(str);
         fprintf(fp, "\n%s", str);
*/
           fclose(fp);



}
