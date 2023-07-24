#include<stdio.h>
#include<math.h>
void roots(int,int,int);
int main()
{
    int a,b,c;

    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("Enter the value of B: ");
    scanf("%d",&b);
    printf("Enter the value of C: ");
    scanf("%d",&c);
    roots(a,b,c);
    return 0;
}
void roots(int a, int b, int c)
{
    float x1,x2;
    float d;
    d=(b*b-4*a*c);

    if(d>=0)
    {
        x1=(-b+sqrt(d))/2*a;
        x2=(-b-sqrt(d))/2*a;

        printf("First root is %d\n ",x1);
        printf("Second root is %d ",x2);
    }

    else
    {
        printf("It have infinite solution");
    }
}
