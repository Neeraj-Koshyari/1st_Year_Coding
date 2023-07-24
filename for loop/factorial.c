#include<stdio.h>
int main()
{
    int a,b=1, fact=1;

    printf("Enter the Number: ");
    scanf("%d", &a);

    for(  ;b<=a;b++)
    {
        fact=fact*b;
    }

    printf("Factroyal of the Number %d is %d", a, fact);
    return 0;
}
