#include <stdio.h>

int main() {
    int n; 
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target_number;
    printf("Enter the number to find its frequency: ");
    scanf("%d", &target_number);

    int frequency = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] == target_number) {
            frequency++;
        }
    }

    printf("The frequency of %d in the list is: %d\n", target_number, frequency);

    return 0;
}
