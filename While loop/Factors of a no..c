#include<stdio.h>
int main()
{
    int a=1,n;

    printf("Enter the no.: ");
    scanf("%d",&n);

    while(a<n)
    {
        if(n%a==0)
        {
            printf("%d",a);
        }
    a++;
    }
    return 0;
}
