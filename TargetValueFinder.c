#include<stdio.h>
int main()
{
    int target,n,pair1,pair2,i;
    printf("Enter the number of list elements : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the list elements : [");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("]\nEnter the target sum vaLue : ");
    scanf("%d",&target);
    printf("Target value pairs are : ");
    for(i=0;i<n;i++)
    {
        int c=a[i];
        for(int j=i;j<n;j++)
        {
            if(c+a[j]==target)
            {
                pair1=c;
                pair2=a[j];
                printf("(%d,%d)",pair1,pair2);
            }
        }
    }

}