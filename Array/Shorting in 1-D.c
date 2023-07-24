// arranging in systamatic order
#include<stdio.h>
int main()
{
    int i,j,n,temp,arr[50];
    printf("Enter the range: ");
    scanf("%d",&n);

    printf("Enter the Elements of array: ");
    for(i=0;i<=n-1;i++)
    {

        scanf("%d",&arr[i]);
    }

    for(j=0;j<=n-1;j++)
    {
        for(i=0;i<=n-2;i++)
        {
            if(arr[i]>arr[i+1])
            {
               temp=arr[i];
               arr[i]=arr[i+1];
               arr[i+1]=temp;
            }
        }
    }
    for(i=0;i<=n-1;i++)
    {
        printf("%d,",arr[i]);
    }
    return 0;
}
