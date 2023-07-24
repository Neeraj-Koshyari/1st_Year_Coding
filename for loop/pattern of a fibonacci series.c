/*      no star
        *
        *
        **
        ***
        *****     */

    #include<stdio.h>
    int main()
    {
        int next,k,a,b,n;
        int first=0,second=1;

        printf("Enter the range: ");
        scanf("%d",&n);

        for(a=1;a<=n;a++)
        {

            if(a<=1)
                {
                    printf("*\n");
                }
            else
                {
                    next=first+second;
                    first=second;
                    second=next;

                    for(k=1;k<=next;k++)
                    {
                        printf("*");
                    }
                    printf("\n");
                }

        }
        return 0;
    }
