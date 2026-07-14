#include <stdio.h>

int main(void) {
    double value1, value2, sum, average;

    printf("Enter first value: ");
    scanf("%lf", &value1);

    printf("Enter second value: ");
    scanf("%lf", &value2);

    sum = value1 + value2;
    average = sum / 2.0;

    printf("Addition: %.2f\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
