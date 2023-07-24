/*   A
     BC
     CDE
     EFGH
     ..... */

     #include<stdio.h>
     int main()
     {
         int a,b,n;
         char ch=65;
         printf("Enter the no. of rows: ");
         scanf("%d",&n);

         for(a=1;a<=n;a++)
         {
             for(b=1;b<=a;b++)
             {
                 printf("%c",ch);
                 ch=ch+1;
             }
             printf("\n");
         }
         return 0;
     }

