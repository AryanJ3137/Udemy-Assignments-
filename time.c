#include <stdio.h>

int main() {
    long int minutes;
    float days, years;

    // Input minutes
    printf("Enter number of minutes: ");
    scanf("%ld", &minutes);

    // Convert minutes to days and years
    days = minutes / (60.0 * 24);
    years = minutes / (60.0 * 24 * 365);

    // Display results
    printf("Days = %.2f\n", days);
    printf("Years = %.2f\n", years);

    return 0;
}