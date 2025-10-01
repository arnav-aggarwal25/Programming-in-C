#include <stdio.h>

int main() {
    int num;
    int pos = 0;
    int neg= 0;
    int zero = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0) {
            pos++;
        } else if (num < 0) {
            neg++;
        } else {
            zero++;
        }

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); 

    } while (choice == 'y' || choice == 'Y');

    printf("\n--- Results ---\n");
    printf("Count of positive numbers: %d\n", pos);
    printf("Count of negative numbers: %d\n", neg);
    printf("Count of zeros: %d\n", zer);

    return 0;
}
