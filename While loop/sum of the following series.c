// sum of the series 1/1! + 2/2! + 3/3! + ....up to n terms
#include<stdio.h>
int main()
{
    int a=1,b,c=1,d=1;
    float sum=0;
    printf("Enter the number of term: ");
    scanf("#d" ,&b);

    while(a<=b)
    {
        while(d<=a)
        {
            c=c*a;
            d++;
        }
        sum=sum+(float)a/c;
        a++;
    }

    printf("Sum of the series is %f",sum);

    return 0;
}
