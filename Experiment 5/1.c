#include <stdio.h>
#include <limits.h> 

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    if (n < 2) {
        printf("Cannot find the second largest element for an array with less than 2 elements.\n");
        return 0;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; 
            largest = arr[i];      
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    if (secondLargest == INT_MIN && largest != INT_MIN) {
        printf("All elements are identical, no distinct second largest element.\n");
    } else {
        printf("The second largest element in the array is: %d\n", secondLargest);
    }

    return 0;
}