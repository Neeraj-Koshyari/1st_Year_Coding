#include<stdio.h>
int main()
{
    int a,sum=0,rem;
     printf("Enter any number");
     scanf("%d", &a);

     while(a!=0)
     {
         rem=a%10;
         sum=sum+rem;
         a=a/10;
     }
     printf("The sum of all the digit in the number is %d",sum);
     return 0;
}
