#include<stdio.h>

void input_time(int *current_hour, int *current_minute, int *deadline_hour, int *deadline_minute)
{
    // input current time
    printf("Enter the current hour: ");
    scanf("%d", current_hour);
    while (*current_hour < 0 || *current_hour > 24)
    {
        printf("Invalid input. Enter the current hour (0-24): ");
        scanf("%d", current_hour);
    }
    printf("Enter the current minute: ");
    scanf("%d", current_minute);
    while (*current_minute < 0 || *current_minute > 59)
    {
        printf("Invalid input. Enter the current minute (0-59): ");
        scanf("%d", current_minute);
    }
    // input deadline time
    printf("Enter the deadline hour: ");
    scanf("%d", deadline_hour);
    while (*deadline_hour < 0 || *deadline_hour > 24)
    {
        printf("Invalid input. Enter the deadline hour (0-24): ");
        scanf("%d", deadline_hour);
    }
    printf("Enter the deadline minute: ");
    scanf("%d", deadline_minute);
    while (*deadline_minute < 0 || *deadline_minute > 59)
    {
        printf("Invalid input. Enter the deadline minute (0-59): ");
        scanf("%d", deadline_minute);
    }
}

int calculate_minutes_left(int current_hour, int current_minute, int deadline_hour, int deadline_minute)
{
    int current_time_in_minutes = current_hour * 60 + current_minute;
    int deadline_time_in_minutes = deadline_hour * 60 + deadline_minute;
    int minutes_left = deadline_time_in_minutes - current_time_in_minutes;
    return minutes_left;
}

int main()
{
    int current_hour, current_minute, deadline_hour, deadline_minute;
    input_time(&current_hour, &current_minute, &deadline_hour, &deadline_minute);
    int minutes_left = calculate_minutes_left(current_hour, current_minute, deadline_hour, deadline_minute);
    if (minutes_left < 0)
    {
        printf("The deadline has passed.\n");
    }
    else
    {
        printf("You have %d minutes left!\n", minutes_left);
    }
    return 0;
}
