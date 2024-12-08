#include<stdio.h>
int main()
{
    int n,a=0,b=1,sum;
    printf("Enter the number of months : ");
    scanf("%d",&n);
    printf("OUtput : ");
    for(int i=1;i<=n;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("%d",a);
}