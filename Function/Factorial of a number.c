#include<stdio.h>
int main()
{
    int n,f;
    printf("Enter the number: ");
    scanf("%d",&n);
    f=fact(n);
    printf("The factorial of the number %d is %d",n,f);
    return 0;
}
int fact(int n)
{
    if(n>1)
    {
        return n*fact(n-1);
    }
    else
    {
        return 1;
    }
}
