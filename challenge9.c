#include<stdio.h>
int main()
{
    int f,n,d;
    printf("Enter the first number, number of digit and differnce: ");
    scanf("%d%d%d",&f,&n,&d);
    printf("n-1 number is : %d",f+(n-1)*d);
    return 0;
}