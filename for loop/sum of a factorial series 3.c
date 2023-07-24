#include<stdio.h>
int main()
{
	int sum=0,num=0,i,j,n;
	printf("Enter the number: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
        i=i+1;
        sum=num;
        if(i<n)
        {
            num=num-i*i;
            num=sum;
        }
    }
	printf("The answer of the series is %d",num);
	return 0;
}
