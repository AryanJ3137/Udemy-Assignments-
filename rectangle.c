#include <stdio.h>

int main() {
    float length, width, perimeter, area;

    printf("Enter length and width of rectangle: ");
    scanf("%f %f", &length, &width);

    perimeter = 2 * (length + width);
    area = length * width;

    printf("Perimeter = %.2f\n", perimeter);
    printf("Area = %.2f\n", area);

    return 0;
}