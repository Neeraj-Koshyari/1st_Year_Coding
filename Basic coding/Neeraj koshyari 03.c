#include<stdio.h>
int main()
{
    float C,F;
    printf("Enter the value of Temperature(in Celsius): ");
    scanf("%f",&C);
    F=(9.0/5*C)+32;
    printf("The Temperature in Fahrenheit is %f",F);
    return 0;
}
