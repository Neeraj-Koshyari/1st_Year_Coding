/*   *
     **
     ***
     ****
     .....   */


     #include<stdio.h>
     int main()
     {
         int b,a=1,n;

         printf("Enter the no. of rows to print : ");
         scanf("%d", &n);

         for(a=1;a<=n;a++)
         {
             for(b=1;b<=a;b++)
             {
                 printf("A");
             }

          printf("\n");

         }
         return 0;
     }
