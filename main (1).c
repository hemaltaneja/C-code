/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main ()
{
    char x ;
    printf("enter value\n");
    scanf("%c", &x);
     
    if (x=='F' || x=='f')
    {
        printf("FEMALE");
        
    }
    else if (x=='M' || x=='f')
    {
        printf("MALE");
        
    }
    else
    {
        printf("OTHER");
    }
    return 0 ;
}
    
