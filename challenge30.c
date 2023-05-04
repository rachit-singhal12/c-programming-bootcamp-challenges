#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value : \n");
    scanf("%d",&a);
    if(a%400 == 0)
    {
        printf("Leap year");
    }
    else if(a%100==0)
    {
        printf("Not Leap year");
    }   
    else if(a%4==0)
    {
        printf("Leap year");
    }
    else{
        printf("Not Leap year");
    }
    return 0;
}
