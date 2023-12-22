#include <stdio.h>

void printDuplicates(int arr[], int n) {
    int i = 0;
    while (i < n) {
        // Count occurrences of the current element
        int count = 1;
        while ((i < n - 1) && (arr[i] == arr[i + 1])) {
            count++;
            i++;
        }

        // Print if frequency is more than 1
        if (count > 1) {
            printf("%d->%d,", arr[i], count);
        }

        i++;
    }
}

int main() {
    // Sample Input
    int arr[] = {1, 1, 1, 2, 4, 4, 4, 4, 5, 6, 9, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function call
    printDuplicates(arr, n);

    return 0;
}

