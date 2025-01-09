#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int isSorted(int *array, int size);
void swap(int *a, int *b); 
int bogoSort(int *array, int size);

int main() {
    int arr[MAX]; 
    int i;
    int value;

    printf("Enter elements, -1 to finish:\n");

    for (i = 0; i < MAX; ++i) {
        scanf("%d", &value);
        if (value == -1) {
            break;
        }
        arr[i] = value;
    }

    printf("You entered:\n");
    for (int j = 0; j < i; ++j) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    int final = bogoSort(arr, i);
    if (final == 0) {
        printf("Sorted!\n");
    } else {
        printf("Sorting failed!\n");
    }

    printf("Sorted array: ");
    for (int j = 0; j < i; ++j) {
        printf("%d ", arr[j]);
    }
    printf("\n");


    return 0;
}

int bogoSort(int *array, int size) {
    while (1) {
        int final = isSorted(array, size);
        if (final == 0) {
            return 0;
        }

        int val1 = rand() % size; 
        int val2 = rand() % size;

        swap(&array[val1], &array[val2]);
    }
}

void swap(int *a, int *b) { 
  int t = *a; 
  *a = *b; 
  *b = t; 
} 

int isSorted(int *array, int size) {
    for (int i = 0; i < size - 1; i++) { 
        if (array[i] > array[i + 1]) {
            return -1;
        }
    }
    return 0;
}
