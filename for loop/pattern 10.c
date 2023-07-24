/*        *
         ***
        *****
       *******
        *****
         ***
          *     */

     #include<stdio.h>
     int main()
     {
         int a,b,n,k,temp;

         printf("Enter the Range: ");
         scanf("%d",&n);

        for(a=1;a<=n/2+1;a++)
        {
            for(k=1;k<=n/2+1-a;k++)
            {
                printf(" ");
            }
            for(b=1;b<=2*a-1;b++)
            {
                printf("*");
            }
            printf("\n");
        }

    temp=n-2;

        for(a=1;a<=n/2;a++)
        {
            for(k=1;k<=a;k++)
            {
                printf(" ");
            }
            for(b=1;b<=temp;b++)
            {
                printf("*");
            }

            temp=temp-2;
            printf("\n");
        }
        return 0;

     }
