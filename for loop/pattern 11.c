/*         ****
            ***
             **
              *           */

#include<stdio.h>
int main()
{
    int a,b,n,k,temp;

    printf("Enter the range: ");
    scanf("%d", &n);

    temp=n;

        for(a=1;a<=n;a++)
        {
            for(k=1;k<=a-1;k++)
            {
                printf(" ");
            }
            for(b=1;b<=temp;b++)
            {
                printf("*");
            }

            temp=temp-1;
            printf("\n");
        }
    return 0;
}
