#include <stdio.h>

int main() {
    int number = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    number >= 10 && number <= 20
        ? printf("The number is in range.\n")
        : printf("The number is out of range.\n");

    return 0;
}
