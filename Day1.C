#include <stdio.h>

int main()
{
    float number1, number2;
    int condutor;
    do
    {
        printf("Choose an operation: \n");
        printf("1. + Addition\n");
        printf("2. - Subtraction\n");
        printf("3. * Multiplication\n");
        printf("4. / Division\n");
        printf("5. %% Modulus\n");
        printf("6.Exit the program:\n");

        printf("Enter your choice: ");
        scanf(" %d", &condutor);
        if(condutor < 1 || condutor > 6)
        {
            printf("Invalid operator.\n");
            continue;
        }
        if (condutor == 6)
        {
            printf("Exiting the program.\n");
        }
        else
        {
            printf("Enter two numbers: ");
            scanf("%f %f", &number1, &number2);
            switch (condutor)
        {
        case 1:
            printf("%.2f", number1 + number2);
            break;
        case 2:
            printf("%.2f", number1 - number2);
            break;
        case 3:
            printf("%.2f", number1 * number2);
            break;
        case 4:
            if (number2 == 0)
            {
                printf("Error: Division by zero");
            }
            else
            {
                printf("%.2f", number1 / number2);
            }
            break;
        case 5:
            if (number2 == 0)
            {
                printf("Error: Division by zero");
            }
            else
            {
                printf("%d", (int)number1 % (int)number2);
            }
            break;

        default:
            printf("Invalid operator");
            break;
        }
        }

        
    } while (condutor != 6);
    return 0;
}