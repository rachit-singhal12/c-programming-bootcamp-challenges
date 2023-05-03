#include<stdio.h>
int main()
{
    int arr[5],sum=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        if(sum<=arr[i])
        sum=i;
    }
    printf("%d",sum+1);
    return 0;
}