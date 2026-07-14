#include <stdio.h>
//avg of two values
int main(void) {
    double value1, value2, average;

    printf("Enter first value: ");
    scanf("%lf", &value1);

    printf("Enter second value: ");
    scanf("%lf", &value2);

    average = (value1 + value2) / 2.0;
    printf("Average: %.2f\n", average);
    return 0;
}
