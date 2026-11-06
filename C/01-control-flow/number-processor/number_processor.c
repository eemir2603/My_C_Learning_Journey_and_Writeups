#include <stdio.h>

int numberProcessor(int number);

int main(void)
{
    int number = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = numberProcessor(number);
    printf("Result: %d\n", result);

    return 0;
}

int numberProcessor(int number)
{
    int sum = 0;

    for (int i = 1; i <= number; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }

        if (sum + i > 50)
        {
            break;
        }

        sum += i;
    }

    return sum;
}
