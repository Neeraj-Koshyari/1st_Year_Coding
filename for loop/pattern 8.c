/*         *
          ***
         *****
        *******     */

        #include<stdio.h>
        int main()
        {
            int a,b,n,k;

            printf("Enter the range: ");
            scanf("%d", &n);

            for(a=1;a<=n;a++)
            {
                for(k=1;k<=(n-a);k++)
                {
                    printf(" ");
                }

                for(b=1;b<=(2*a-1);b++)
                {
                    printf("*");
                }
                printf("\n");
            }
            return 0;
        }
