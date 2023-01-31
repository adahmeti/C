#include <stdio.h>
#include <math.h>

int main() {
    int hours, minutes;
    float hour_angle, minute_angle,angle;

    printf("Enter the number of hours: ");
    scanf("%d", &hours);
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    hour_angle = 30 * hours + 0.5 * minutes;
    minute_angle = 6 * minutes;
    angle= fmod((minute_angle-hour_angle + 360), 360);

    printf("Hour hand angle: %.2f degrees\n", fmod(hour_angle, 360));
    printf("Minute hand angle: %.2f degrees\n", angle);

    return 0;
}
