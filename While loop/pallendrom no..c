#include<stdio.h>
int main()
{
    int a,b,num=0,rem;

    printf("Enter any number: ");
    scanf("%d",&a);
    b=a;
    while(b!=0)
    {
        rem=b%10;
        num=(num*10)+rem;
        b=b/10;
    }

    if(num==a)
    {
        printf("Entered Number is Palindrome ");
    }

    else
    {
        printf("Entered number is not Palindrome ");
    }
    return 0;

}
