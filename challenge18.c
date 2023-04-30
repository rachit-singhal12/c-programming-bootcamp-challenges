#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the values : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("a is greater");
    else if(b>a&&b>c)
    printf("B is greater");
    else
    printf("c is grater");
    return 0;
}