#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size]; 
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int positive_count = 0;
    int negative_count = 0;
    int odd_count = 0;
    int even_count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        }

        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("\n--- Analysis of the Array ---\n");
    printf("Number of positive numbers: %d\n", positive_count);
    printf("Number of negative numbers: %d\n", negative_count);
    printf("Number of odd numbers: %d\n", odd_count);
    printf("Number of even numbers: %d\n", even_count);

    return 0;
}
