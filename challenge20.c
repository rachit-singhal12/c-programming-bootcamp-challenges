#include<stdio.h>
int main()
{
    int a,count=0;
    printf("Enter the number : ");
    scanf("%d",&a);
    while(a>0)
    {
        a/=10;
        count++;
    }
    if(count==2)
        printf("It is two digit number ");
    else if(count==3)
        printf("It is a three digit number ");\
    else
        printf("It is neither a two digit or three digit number ");
    return 0;
}
    