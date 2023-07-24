#include<stdio.h>
int main()
{
    int a=0,b=0,c=0;
    if((a=5)||(b=10));
    {
        printf("a=%d,b=%d",++a,b++);
    }
    return 0;
}
