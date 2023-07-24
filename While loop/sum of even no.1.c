#include<stdio.h>
int main()
{
    int i=1,sum=0,n,j=2;

    printf("Enter the value till where you want the sum of even no. : ");
    scanf("%d",&n);

    while(i<=n)
    {
        sum=sum+j;
        i++;
        j=j+2;
    }

    printf("The sum of the number is:%d",sum);
    return 0;
}
