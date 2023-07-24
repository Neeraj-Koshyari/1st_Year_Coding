/*           *
            **
           ***
          ****
         .....   */

         #include<stdio.h>
         int main()
         {
             int k,a,b,n;

             printf("Enter the range: ");
             scanf("%d",&n);

             for(a=1;a<=n;a++)
             {
                 for(k=1;k<=(n-a);k++)
                 {
                     printf(" ");
                 }

                 for(b=1;b<=a;b++)
                 {
                     printf("*");
                 }
                 printf("\n");
             }
             return 0;
         }
