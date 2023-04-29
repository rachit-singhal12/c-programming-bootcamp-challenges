#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;
    printf("Enter the values : ");
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    int result = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    printf("%d",result);
    return 0;
}
