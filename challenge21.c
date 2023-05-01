#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    if(a>0)
        printf("the absolute value is %d",a);
    else
        printf("The absolute value is %d",-1*a);
    return 0;
}