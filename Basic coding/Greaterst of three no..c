#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first digit");
    scanf("%d",&a);
    printf("Enter second digit");
    scanf("%d",&b);
    printf("Enter Third digit");
    scanf("%d",&c);

    if((a>b) &&(a>c))
    {
        printf("The first digit %d is greatest ",a);
    }

    else if((b>a) && (b>c))
    {
        printf("The second digit %d is greatest",b);
    }

    else if((a=b=c))
    {
        printf("All the value are same");
    }

    else
    {
        printf("The third digit %d is greatest",c);
    }
    return 0;
}
