#include <stdio.h>
int leapYear(int);
int main()
{
    int year;
    printf("Enter the year for check leap\n");  
    scanf("%d",&year);
    if(leapYear(year))
        printf("%d is a leap year",year);
    else
        printf("%d is not a leap year",year);
        getch();
    return 0;
}
int leapYear(int y){
    if((y%400==0)||((y%4==0)&&(y%100!=0)))  
       return 1;
    else
        return 0;
}