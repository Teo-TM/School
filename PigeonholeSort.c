#include <stdio.h>
#include <stdlib.h>

int main() {
    const int N = 10;
    int arr[N];

    return 0;
}

int* pigeonholeSort(int arr[], int size) {
    int i, j;
    int min = arr[0];
    int max = arr[0];
    int range;

    for (i = 1; i < size; i++) {
        if (arra_nums[i] < min_val) min_val = arra_nums[i];
        if (arra_nums[i] > max_val) max_val = arra_nums[i];
    }

    range = max_val - min_val + 1;
    int *temp = (int *)malloc(sizeof(int) * range);

    // Initialize the temp array with zeros
    for (i = 0; i < range; i++) {
        temp[i] = 0;
    }

    // Count the occurrences of each element in the input array
    for (i = 0; i < size; i++) {
        temp[arra_nums[i] - min_val]++;
    }

    j = 0;

    // Reconstruct the sorted array based on the counts
    for (i = 0; i < range; i++) {
        while (temp[i] > 0) {
            arra_nums[j] = i + min_val;
            temp[i]--;
            j++;
        }
    }

    return arra_nums;
}