/*  1
    11
    111
    1111
    ..... */

    #include<stdio.h>
    int main()
    {
        int a,b,n;

        printf("Enter the no. of rows: ");
        scanf("%d",&n);

        for(a=1;a<=n;a++)
        {
            for(b=1;b<=a;b++)
            {
                printf("1");
            }
        printf("\n");
        }
        return 0;
    }
