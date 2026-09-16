# include<stdio.h>
int main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if ( (year % 400 == 0 ) ||( year %4==0 && year!=100))
    {
        printf("year is the leap year\n");
        return 0;
    }
        printf("year is not a leap year\n");
    return 0;
}