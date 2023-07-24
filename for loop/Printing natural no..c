#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter the range : ");
    scanf("%d",&b);

    for(a=1; a<=b; a++)
    {
        printf("%d\n",a);
    }
    return 0;
}
