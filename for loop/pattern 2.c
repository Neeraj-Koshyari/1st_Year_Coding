/*   1
     12
     123
     1234
     ..... */

     #include<stdio.h>
     int main()
     {
         int a=1,b,n;

         printf("Enter the no. of rows: ");
         scanf("%d",&n);

         for(   ;a<=n;a++)
         {
             b=1;

             for(b=1;b<=a;b++)
             {
                 printf("%d",b);
             }
             printf("\n");
         }
         return 0;
     }
