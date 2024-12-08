#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum1=0,i,c,rem,num,sum2=0,sum;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i<=9)
        {
        c=i*i;
        sum1+=c;
        }
        if(i>=10)
        {
            num=i;
            num=num/10;
            rem=i%10;
            sum2+=(num*num)+(rem*rem);
        }

    }
    sum=sum1+sum2;
    printf("Result : %d",sum);

}