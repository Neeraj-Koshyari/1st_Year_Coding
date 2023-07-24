#include<stdio.h>
int main()
{
    int a=1,j=2,b;
    printf("Enter any value till the no. you want Even no.");
    scanf("%d",&b);

    while(a<=b)
    {
        printf("%d\n",j);
        j=j+2;
        a++;
    }
    return 0;
}
