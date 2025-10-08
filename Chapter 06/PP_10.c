#include <stdio.h>

int main(void)
{
    int month, day, year;
    int earliest_month, earliest_day, earliest_year;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    // If first input is 0/0/0, exit immediately
    if (month == 0 && day == 0 && year == 0)
    {
        printf("No dates entered.\n");
        return 0;
    }

    // Initialize earliest date
    earliest_month = month;
    earliest_day = day;
    earliest_year = year;

    // Continue reading until 0/0/0 is entered
    while (1)
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);

        if (month == 0 && day == 0 && year == 0)
            break;

        // Compare current date with earliest date
        if (year < earliest_year ||
                (year == earliest_year && month < earliest_month) ||
                (year == earliest_year && month == earliest_month && day < earliest_day))
        {
            earliest_year = year;
            earliest_month = month;
            earliest_day = day;
        }
    }

    printf("%d/%d/%d is the earliest date\n", earliest_month, earliest_day, earliest_year);

    return 0;
}
