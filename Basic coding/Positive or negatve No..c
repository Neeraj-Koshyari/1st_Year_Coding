#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number:");
    scanf("%d",&a);
    if(a>0)
    {
        printf("The Entered Number (%d) is positive", a);
    }
    else
    {
        printf("The Entered Number (%d) is Negative",a);
    }
    return 0;
}
