#include <stdio.h>

int main() {
    float num, num1;
    float sum, sub, div, mod;
    int choice;

    printf("    Calculator\n");
    printf("    ----------\n");
    printf("1. To get Summation value\n");
    printf("2. To get Subtraction value\n");
    printf("3. To get Division value\n");
    printf("4. To get Module value\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4) {
        printf("Enter 1st number: ");
        scanf("%f", &num);

        printf("Enter 2nd number: ");
        scanf("%f", &num1);

        sum = num + num1;
        sub = num - num1;
        div = num / num1;
        mod = (int)num % (int)num1;

        switch (choice) {
            case 1:
                printf("Summation value is: %f\n", sum);
                break;
            case 2:
                printf("Subtraction value is: %f\n", sub);
                break;
            case 3:
                if (num1 != 0) {
                    printf("Division value is: %f\n", div);
                } else {
                    printf("Error: Division by zero!\n");
                }
                break;
            case 4:
                printf("Module value is: %f\n", mod);
                break;
        }
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}