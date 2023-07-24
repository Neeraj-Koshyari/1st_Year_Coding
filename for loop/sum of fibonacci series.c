/*  series is
    first term in fibonacci series is 0 and second is 1
    and net terms is the sum of the last two terms so the series is
    0+1+1+2+3+5+8+13+.....n terms    */

    #include<stdio.h>
    int main()
    {
        int first=0, second=1,n,a,sum;

        printf("Enter the number of terms: ");
        scanf("%d",&n);

        for(a=0;a<=n;a++)
        {
            if(a<=1)
            {
                sum=a;
            }

            else
            {
                sum=first+second;
                first=second;
                second=sum;
            }
        }
        printf("The sum of the %d terms is %d",n,sum);
        return 0;
    }
