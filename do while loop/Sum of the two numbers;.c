#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter the value of a: ");
    scanf("%d",&a);

    printf("Enter the value of b: ");
    scanf("%d",&b);

    do
    {
        printf("The sum  is : %d", a+b);
    }
    while(a<=0);

    return 0;
}
