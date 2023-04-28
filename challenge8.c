#include<stdio.h>
int main()
{
    int f,n,l;
    printf("Enter the first number, number of digit and last number: ");
    scanf("%d%d%d",&f,&n,&l);
    printf("sum of number is : %d",(f+l)*(n/2));
    return 0;
}