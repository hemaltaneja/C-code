/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int a  ;
   printf("enter the values\n");
   scanf("%d" , &a );
   
   if(a==1)
   {
       printf("SUNDAY");
      
   }
   else if (a==2)
   {
       printf("MONDAY");
   }
   else if (a==3)
   {
       printf("Tuesday");
   }
   else if (a==4)
   {
       printf("WEDNESDAY");   
   }
   else if (a==5)
   {
       printf("THURSDAY");
   }
   else if (a==6)
   {
       printf("FRIDAY");
   }
   else if (a==7)
   {
       printf("SUNDAY");
   }
   else 
   {
       printf ("Wrong Value ");
   }
    return 0;
}
