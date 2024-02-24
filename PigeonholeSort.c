#include <stdio.h>

int main(){
    const int N = 10;
    int arr[N];

    return 0;
}

void sort(int arr[], int size){
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < size; i++){
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    int range = max -min +1;
    int holes[size][range];
    int j = 0;
 
    for (int i = 0; i < size; i++){
        holes[arr[i] -min][j] = arr[i];
        j++;
    }
    int k = 0;

    for (int i = 0; i < range; i++){
       for (it = holes[i].begin(); it != holes[i].end(); ++it)
            arr[index++]  = *it;
    }
}