
#include<stdio.h>
int main()
{
    float si,ci,p,r,t;
    printf("Enter the value of Principle:");
    scanf("%f",&p);

    printf("Enter the value of rate:");
    scanf("%f",&r);

    printf("Enter the value of time:");
    scanf("%f",&t);

    if(p<10000)
    {
        si=(p*r*t)/100;
        printf("The Simple Interest is %f",si);
    }
    else
    {
        ci=p*pow(1-(r/100),t);
        printf("The compound Interest is %f",ci);
    }
    return 0;
}
