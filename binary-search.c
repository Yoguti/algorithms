#include <stdio.h>

// Function prototypes
int binarySearch(int haystack[], int needle, int heylenght);

int main() {

    int heylenght = 100;
    int needle = 101;
    int heystack[heylenght];
    for (int i = 0; i < heylenght; i++){
        heystack[i] = i+1;
    }
    printf("searching for : %d\n\n", needle);
    for(int loop = 0; loop < heylenght; loop++) {
        printf("%d ", heystack[loop]);
    }
    printf("\n");
    printf("binary search result: \n");
    int save = binarySearch(heystack, needle, heylenght);
    if( save == 0){
        printf("found\n\n");
    } else {
        printf("not found\n\n");
    }
    return 0;
}

int binarySearch(int haystack[], int needle, int heylenght) {
    int low = 0;
    int high = heylenght;  
    while (low < high) {
        int mid = low + (high - low) / 2;
        int value = haystack[mid];
        if (value == needle) {
            return 0;  
        } else if (value > needle) {
            high = mid;  
        } else {
            low = mid + 1;  
        }
    }
    return 1; 
}
