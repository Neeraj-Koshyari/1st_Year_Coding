// The series is 1! + 2! + 3! .... n term


#include<stdio.h>
int main()
{
    int a, b, j;
    int sum=0, fact;


    printf("Enter the Number of term: ");
    scanf("%d", &a);

    for(b=1;b<=a;b++)
    {
        fact=1;

        for(j=1;j<=b;j++)
            {
                fact=fact*j;
            }
            sum=sum+fact;
    }
    printf("The sum of the series is %d", sum);
    return 0;
}
