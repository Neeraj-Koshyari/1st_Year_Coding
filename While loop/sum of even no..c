#include<stdio.h>
int main()
{
    int a=2,sum=0,b;
    printf("Enter the value for the sum of the even no. lies in your no.");
    scanf("%d",&b);

    while(a<=b)
    {
        sum=sum+a;
        a=a+2;
    }
    printf("The sum of the number is %d",sum);
    return 0;
}
