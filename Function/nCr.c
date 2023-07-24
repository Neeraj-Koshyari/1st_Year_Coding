#include<stdio.h>
float ncr(int,int);
int main()
{
    int n,r;
    float ans;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);

    if(n<r)
    {
        printf("Invalid number");
    }

    ans=ncr(n,r);
    printf("nCr=%f",ans);
    return 0;

}

float ncr(int n, int r)
{
    float ans;
    ans=(float)fact(n)/(fact(r)*fact(n-r));
    return ans;
}

int fact(int n)
{
    if(n>1)
    {
        return n*fact(n-1);
    }
    else
    {
        return 1;
    }
}
