#include<stdio.h>
int main()
{
    int n,a,s;
    int i;
    printf("Enter the number of terms:");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        printf("Enter the number: ");
        scanf("%d",&n);
        s=n*n;
        printf("The square of the number is %d\n",s);

    }
    return 0;
}
