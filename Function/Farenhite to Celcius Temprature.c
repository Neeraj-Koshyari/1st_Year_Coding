#include<stdio.h>
int main()
{
    float F,C;
    int display()
    {
        F=(9.0/5*C)+32;
        printf("The Temperature in Fahrenheit is %f",F);
    }

    printf("Enter the temperature in Celsius: ");
    scanf("%f",&C);
    display();
    return 0;
}
