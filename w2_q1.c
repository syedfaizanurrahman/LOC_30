#include <stdio.h>

int countOccurrences(int arr[], int size, int num) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 1, 5, 1, 6, 7, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num = 1;
    int count = countOccurrences(arr, size, num);
    printf("The number of occurrences of %d in the array is %d\n", num, count);
    return 0;
}
