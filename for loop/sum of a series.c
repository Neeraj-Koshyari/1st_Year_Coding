// series is 1/1 + 1/2 + 1/3 + 1/4 +......up to n-term

#include<stdio.h>
int main()
{
    int a,n;
    float b=1,num,sum;

    printf("Enter the range: ");
    scanf("%d", &n);

    for(a=1;a<=n;a++)
    {
        num=b/a;
        sum=sum+num;

    }
    printf("The answer is %f", sum);
    return 0;
}
