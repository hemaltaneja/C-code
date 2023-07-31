#include <stdio.h>
void add (int a , float b );
void sub (int a , float b );
int main()
{
    int a ;
    float b;
    printf("enter value ");
    scanf("%d %f" ,&a , &b);
    add(a,b);
    sub(a,b);
}
void add(int a , float b )
{
    float c = a+b;
    printf("addition :%f\n" , c);
}
void sub (int a , float b )
{
    float d = a-b;
    printf("Subtraction :%f",d);
}