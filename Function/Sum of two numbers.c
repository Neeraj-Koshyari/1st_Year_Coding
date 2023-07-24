#include<stdio.h>
int main()
{
    int a,b,sum;
    int display(int a, int b)
    {
        sum=a+b;
        printf("The sum is %d\n",sum);
    }

    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    display(a,b);
    return 0;
}
