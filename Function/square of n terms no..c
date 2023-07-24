#include<stdio.h>
int display(int);
int main()
{
    int n,a,b;
    printf("Enter the number of terms: ");
    scanf("%d",&n);

   int display(int n)
    {
        printf("Enter the number: ");
        scanf("%d",&b);
        printf("The square of the number is: %d \n", b*b);
    }

    for(a=1;a<=n;a++)
    {
        display(n);

    }
    return 0;
}
