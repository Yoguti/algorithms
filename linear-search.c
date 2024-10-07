#include <stdio.h>

// Function prototypes
int linearSearch(int haystack[], int needle, int heylenght);

int main() {

    int heylenght = 10;
    int needle = 100;
    int heystack[heylenght];
    for (int i = 0; i < heylenght; i++){
        heystack[i] = i+1;
    }

    for(int loop = 0; loop < 10; loop++) {
        printf("%d ", heystack[loop]);
    }
    printf("\n");
    printf("linear search result: \n");
    int save = linearSearch(heystack, needle, heylenght);
    if( save == 0){
        printf("found\n");
    } else {
        printf("not found\n");
    }
    return 0;
}

int linearSearch(int haystack[], int needle, int heylenght) {
    for (int i = 0; i < heylenght; i++) {
        if(haystack[i] == needle) {
            return 0;
        }
    }
    return 1;
}
