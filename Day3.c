#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("Positive\n");
    }
    else if (number < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero\n");
    }

    if (number % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
    return 0;
}