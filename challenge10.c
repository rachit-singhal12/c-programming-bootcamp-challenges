#include<stdio.h>
int main()
{
    int distance,speed;
    printf("Enter the distance and speed : ");
    scanf("%d%d",&distance,&speed);
    printf("total time required is : %d",distance/speed);
    return 0;
}