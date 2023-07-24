// The series is 1/1! + 3/2! + 5/3! .... n term


#include<stdio.h>
int main()
{
    int a, b, j;
    int  fact;
    float sum=0;


    printf("Enter the Number of term: ");
    scanf("%d", &a);

    for(b=1;b<=a;b++)
    {
        fact=1;

        for(j=1;j<=b;j++)
            {
                fact=fact*j;
            }
        sum=sum+(float)(2*b-1)/fact;
    }
    printf("The sum of the series is %f", sum);
    return 0;
}

