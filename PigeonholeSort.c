#include <stdio.h>
#include <stdlib.h>

int main() {
    const int N = 10;
    int arr[N];

    return 0;
}

void sort(int arr[], int size) {
    int i, j = 0;
    int min = arr[0];
    int max = arr[0];
    int range;

    for (i = 1; i < size; i ++) {
        if (arr[i] < min_val) min = arr[i];
        if (arr[i] > max_val) max = arr[i];
    }

    range = max -min +1;
    int *temp = (int *) calloc(sizeof(int) *range);

    for (i = 0; i < size; i++) {
        temp[arr[i] -min] ++;
    }

    for (i = 0; i < range; i ++) {
        while (temp[i] > 0) {
            arr[j] = i +min;
            temp[i] --;
            j ++;
        }
    }
}