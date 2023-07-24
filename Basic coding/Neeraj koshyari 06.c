#include<stdio.h>
int main()
{
    int B,H;
    float A;
    printf("Enter the value of Base:");
    scanf("%d",&B);
    printf("Enter the value of Height:");
    scanf("%d",&H);
    A=0.5*B*H;
    printf("The area of Triangle is %f",A);
    return 0;
}
