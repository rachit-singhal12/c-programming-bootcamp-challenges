#include<stdio.h>

int main()
{
    int a,b,c;
    double d;
    printf("Enter the grades : \n");
    scanf("%d%d%d",&a,&b,&c);
    d = (a+b+c)/3.0;
    printf("Your birth year is : %lf",d);
    return 0;
}