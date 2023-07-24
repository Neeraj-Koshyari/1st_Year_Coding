#include<stdio.h>
int main()
{
    int a=1,b;

    printf("Enter the value till where you want");
    scanf("%d",&b);

    while(a<=b)
    {
        printf("%d\n" ,2*a);
        a++;
    }
}
