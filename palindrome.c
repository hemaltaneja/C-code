//palindrome
#include<stdio.h>
int main(){
    int num =101;
    int rem,sum=0;
    int temp=num;
    while(num>0){
        rem =num%10;
        sum =sum*10+rem;
        num=num/10;

    }
    if(temp==sum){
        printf("Number is Palindrome");
    }
    else{
        printf("Number is not palindrome");
    }

}