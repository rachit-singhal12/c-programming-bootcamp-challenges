#include<stdio.h>

int main()
{
    int curr_year;
    int age;
    printf("Enter the current year and the age\n");
    scanf("%d",&curr_year);
    scanf("%d",&age);
    printf("Your birth year is : %d",curr_year-age);
    return 0;
}