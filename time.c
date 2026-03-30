#include <stdio.h>

int main() {
    long int minutes;
    float days, years;

    printf("Enter number of minutes: ");
    scanf("%ld", &minutes);

    days = minutes / (60.0 * 24);
    years = minutes / (60.0 * 24 * 365);

    printf("Days = %.2f\n", days);
    printf("Years = %.2f\n", years);

    return 0;
}
