#include <stdio.h>

int main()
{
    int time, sec;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &time, &sec);

    /*if (scanf("%d:%d", &time, &sec) != 2) {
        printf("Invalid input format");
        return 0;
    }*/

    // validate time and seconds
    if (time < 0 || time > 23 || sec < 0 || sec > 59) {
        printf("Invalid time");
        return 0;
    }

    int code;  // classifier for switch

    if (time == 0)
        code = 0;       // midnight
    else if (time == 12)
        code = 12;      // noon
    else if (time < 12)
        code = 1;       // AM
    else
        code = 2;       // PM

    switch (code)
    {
    case 0:
        printf("time is: 12:%.2d AM", sec);
        break;
    case 1:
        printf("time is: %d:%.2d AM", time, sec);
        break;
    case 12:
        printf("time is: 12:%.2d PM", sec);
        break;
    case 2:
        printf("time is: %d:%.2d PM", time - 12, sec);
        break;
    }

    return 0;
}
