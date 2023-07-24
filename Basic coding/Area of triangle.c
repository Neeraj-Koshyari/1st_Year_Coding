#include<stdio.h>
int main()
{
    float a,b,c,A,s;
    printf("Enter the first side of the traingle:");
    scanf("%f",&a);

    printf("Enter the second side of the traingle:");
    scanf("%f",&b);

    printf("Enter the Third side of the traingle:");
    scanf("%f",&c);

    if((a+b>c)&&(b+c>a)&&(a+c>b))
    {
        s=(a+b+c)/2;
        A=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area of the triangle is %f",A);
    }
    else
    {
        printf("The sides of the triangle is invalid");
    }
    return 0;
}
