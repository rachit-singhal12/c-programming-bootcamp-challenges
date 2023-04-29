#include<stdio.h>
int main()
{
    float n;
    printf("Enter the number : ");
    scanf("%f",&n);
    printf("interger part is %d\n ",(int)n);
    printf("interger part is %f ",n-(int)n);
    return 0;
}