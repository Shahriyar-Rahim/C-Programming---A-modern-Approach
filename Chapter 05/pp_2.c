#include<stdio.h>

int main()
{
    int time, sec, tt;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &time, &sec);

     if (time < 0 || time > 23 || sec < 0 || sec > 59) {
        printf("Invalid time");
        return 0;
    }


    if( time == 0)
        printf("Equivalent 12 hour time is: 12:%.2d AM", sec);
    else if( time < 12 )
        printf("Equivalent 12 hour time is: %d:%.2d AM", time, sec);
    else if( time == 12)
        printf("Equivalent 12 hour time is: %d:%.2d PM", time, sec);
    else
        printf("Equivalent 12 hour time is: %d:%.2d PM", time - 12, sec);


    return 0;
}
