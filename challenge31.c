#include<stdio.h>
int main()
{
    int num,pow,number=1;
    scanf("%d%d",&num,&pow);
    for(int i=0;i<pow;i++)
        number = number*num;
    printf("%d",number);
    return 0;
}