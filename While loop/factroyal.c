#include<stdio.h>
int main()
{
    int b=1,c=1,a;

    printf("Enter the Range: ");
    scanf("%d",&a);

    while(b<=a)
    {
        c=c*b;
        b++;
    }

    printf("Factroyal of the number %d is %d",a,c);
    return 0;
}
