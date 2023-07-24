#include<stdio.h>
int main()
{
    int sum=0,b,a=1;
        float avg;
        printf("The the number of digit :-");
        scanf("%d",&b);

        while(a<=b)
        {
            sum=sum+a;
            a++;
        }
        avg=(float)sum/b;
        printf("sum of the number is :%d\n Average of the no. is :%f",sum,avg);
        return 0;
}
