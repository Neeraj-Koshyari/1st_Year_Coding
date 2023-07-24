#include<stdio.h>
int main()
{
    int d,a,b,c;
    float x1,x2;

    printf("Enter the value of a:");
    scanf("%d",&a);

    printf("Enter the value of b:");
    scanf("%d",&b);

    printf("Enter the value of c:");
    scanf("%d",&c);

    d=(b*b-4*a*c);

    if(d>0)
    {
        x1=(-b+sqrt(d))/2a;
        x2=(-b-sqrt(d))/2a;
        printf("The first root is :%f\n",x1);
        printf("The second root is :%f\n",x2);
    }
    else
    {
        printf("It have Imaginary roots");
    }
    return 0;
}
