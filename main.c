// A program that determines if the year entered is a leap year-
// and assigns a value to the date between 1-366

// function prototypes
int isLeap(int year);
int displayDate(int month, int day, int year);
#include <stdio.h>



int main()
{
int month;
int day;
int year;
int leapYear;
int monthName;
int dayNumber;



    printf("\nEnter month, then date, then year, in this format mm/dd/yyyy when prompted.");
     printf("\nEnter month.");
    scanf("%d",&month);
     printf("\nEnter day.");
    scanf("%d",&day);
    printf("\nEnter year.");
    scanf("%d",&year);
    leapYear = isLeap(year);
    printf("is it a leap year?\n1 for yes, 0 for no: %d",leapYear);
    monthName = displayDate(month,day, year);


return 0;

}

// function isLeap
int isLeap(int year)
{
    int leapYear;
    if ((year % 4 == 0) && (year % 100 != 0))
        leapYear = 1;
        else if (year % 400 == 0)
        leapYear = 1;
        else
        leapYear = 0;
    return leapYear;
}
// function displayDate
// I MADE A SWITCH STATEMENT AS INSTRUCTED
// WITH A ZERO RETURN VALUE
int displayDate(int month, int day, int year)
{


    int dayNumber;
    switch (month)
    {
        case 1:
            dayNumber = day;
        printf("\n\nYour date,January %d,%d, is day number %d \n",day, year, dayNumber);
        break;
        case 2:
            dayNumber = day + 31;
        printf("\n\nYour date,February %d,%d, is day number %d \n",day, year, dayNumber);
        break;
        case 3:
            dayNumber = day + 59 + isLeap(year);
        printf("\n\nYour date,March %d,%d, is day number %d \n",day, year, dayNumber);
        break;
        case 4:
            dayNumber = day + 90 + isLeap(year);
        printf("\n\nYour date,April %d,%d, is day number %d \n",day, year, dayNumber);
        break;
        case 5:
            dayNumber = day + 120 + isLeap(year);
        printf("\n\nYour date,May %d,%d, is day number %d \n",day, year, dayNumber);
        break;
        case 6:
            dayNumber = day + 151 + isLeap(year);
        printf("\n\nYour date,June %d,%d, is day number %d \n",day, year, dayNumber);
        break;
        case 7:
            dayNumber = day + 181 + isLeap(year);
        printf("\n\nYour date,July %d,%d, is day number %d \n",day, year, dayNumber);
        break;
        case 8:
            dayNumber = day + 212 + isLeap(year);
        printf("\n\nYour date,August %d,%d, is day number %d \n",day, year, dayNumber);
        break;
        case 9:
            dayNumber = day + 243 + isLeap(year);
        printf("\n\nYour date,September %d,%d, is day number %d \n",day, year, dayNumber);
        break;
        case 10:
            dayNumber = day + 273 + isLeap(year);
        printf("\n\nYour date,October %d,%d, is day number %d \n",day, year, dayNumber);
        break;
        case 11:
            dayNumber = day + 304 + isLeap(year);
        printf("\n\nYour date,November %d,%d, is day number %d \n",day, year, dayNumber);
        break;
        case 12:
            dayNumber = day + 334 + isLeap(year);
        printf("\n\nYour date,December %d,%d, is day number %d \n",day, year, dayNumber);
        break;
        default:
            break;
        return 0;

    }

}
