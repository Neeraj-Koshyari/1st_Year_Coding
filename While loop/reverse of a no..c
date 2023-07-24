#include<stdio.h>
int main()
{
    int a,rem,sum=0;

    printf("Enter the number to reverse");
    scanf("%d",&a);

    while(a!=0)
    {
        rem=a%10;
        sum=(sum*10)+rem;
        a=a/10;
    }
    printf("The reverse of the number is %d",sum);
}
