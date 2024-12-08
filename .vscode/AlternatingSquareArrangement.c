#include<stdio.h>
int main()
{
    int red,blue,i;
    printf("Enter the number of red and blue squares : ");
    scanf("%d %d",&red,&blue);
    if(red%blue==1)
    {
    for(i=1;i<=red+blue;i++)
    {
    if(i%2==1)
    {
        printf("R");
    }
    else
        printf("B");
    }
    }
    else if(blue%red==1)
    {
        for(i=1;i<=blue+red;i++)
        {
            if(i%2==1)
                printf("B");
            else
                printf("R");
        }
    }
    else
        printf("Not Possible");
}