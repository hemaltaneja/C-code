// return and argument
#include<stdio.h>
int show(int a);

int main()
{
    int result=show(1);
    result=show(1);
    printf("%d" ,result);
    return 0;

}
int show(int a)
{
    return a;
}