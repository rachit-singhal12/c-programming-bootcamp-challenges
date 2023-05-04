#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the values : \n");
    scanf("%d%d%d",&a,&b,&c);
    if((b%a==0 && c%a==0) || (a%b==0 && c%b==0) || (c%a==0 && c%b==0))
    {
        printf("Divisible");
    }
    else    
    printf("Not Divisible");
    return 0;
}
