#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int arr[], int size);
void print(int arr[], int size);
void PHsort(int arr[], int size);

int main() {
    const int N = 10;
    int arr[] = {1, 2, 45, 4, 5, 23, 2, 3, 2, -2};

    srand(time(NULL));
    fill(arr, N);
    
    printf("L'array iniziale è:\n");
    print(arr, N);

    PHsort(arr, 10);

    printf("\n\nL'array finale è:\n");
    print(arr, N);

    return 0;
}

void fill(int arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] = rand() %100;
    }
}

void print(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }
}

void PHsort(int arr[], int size) {
    int i, j = 0;
    int min = arr[0];
    int max = arr[0];
    int range;

    for (i = 1; i < size; i ++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    range = max -min +1;
    int *aux = (int *) calloc(range, sizeof(int));

    for (i = 0; i < size; i++) {
        aux[arr[i] -min] ++;
    }

    for (i = 0; i < range; i ++) {
        while (aux[i] > 0) {
            arr[j] = i +min;
            aux[i] --;
            j ++;
        }
    }
}