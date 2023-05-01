#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the both number : ");
    scanf("%d%d",&a,&b);
    if(a>=0&&b>=0)
        printf("1st Quadrant");
    else if(a<0&&b<0)
        printf("3rd Quadrant");
    else if(a<0 && b>=0)
        printf("2nd Quadrant");
    else
        printf("4rth Quadrant");
    return 0;
}