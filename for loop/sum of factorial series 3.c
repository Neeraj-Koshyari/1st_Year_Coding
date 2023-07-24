// factorial of the series 1/1! + 3/3! + 5/5! ..... n terms

#include<stdio.h>
int main()
{
    int n,b,a,fact;
    float sum=0;

    printf("Enter the range: ");
    scanf("%d", &n);

    for(a=1;a<=n;a++)
    {
        fact=1;

        for(b=1;b<=2*a-1;b++)
        {
            fact=fact*b;
        }

        sum=sum+(float)(2*a-1)/fact;
    }

    printf("Sum of the series is %f",sum);
    return 0;
}
