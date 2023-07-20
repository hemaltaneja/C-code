 #include <stdio.h>
int main()
{
    char val;
    printf("enter value\n");
    scanf("%c" , &val);
     if (val=='a' || val=='e' || val=='i' || val=='o' || val=='u')
     {
         printf("character is vowel");
     }
     else{
         printf("character is consonent");
     }
     return 0;
}