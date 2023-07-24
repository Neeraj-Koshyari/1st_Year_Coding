#include<stdio.h>
int main()
{
    int a=2,b;
    printf("Enter any value");
    scanf("%d",&b);

    while(a<=b)
    {
        printf("%d\n",a);
        a=a+2;
    }
    return 0;
}
