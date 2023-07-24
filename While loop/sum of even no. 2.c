#include<stdio.h>
int main()
{
    int a=1,b,sum=0;

    printf("Enter the value till the no. you want the sum of even no.:");
    scanf("%d",&b);

    while(a<=b)
    {
        sum=sum+2*a;
        a++;
    }

    printf("Sum of the number is : %d",sum);
    return 0;
}
