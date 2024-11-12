#include <stdio.h>

void addDays(int *day, int *month, int *year, int daysToAdd) {
    // Array to store the number of days in each month
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Update the day by adding the number of days
    *day += daysToAdd;

    // Check if the year is a leap year
    if ((*year % 4 == 0 && *year % 100 != 0) || (*year % 400 == 0))
        daysInMonth[2] = 29; // Update February days for leap year

    // Adjust the day and month if the new day exceeds the days in the month
    while (*day > daysInMonth[*month]) {
        *day -= daysInMonth[*month];
        (*month)++;
        if (*month > 12) {
            (*year)++;
            *month = 1;
        }
    }
}

int main() {
    int day, month, year, daysToAdd;

    // Input date
    printf("Enter date (dd mm yy): ");
    scanf("%d %d %d", &day, &month, &year);

    // Input number of days to add
    printf("Enter number of days to add: ");
    scanf("%d", &daysToAdd);

    // Call function to add days to the date
    addDays(&day, &month, &year, daysToAdd);

    // Display the new date
    printf("New date after adding %d days: %02d-%02d-%04d\n", daysToAdd, day, month, year);

    return 0;
}
