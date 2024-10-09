#include <stdio.h>

// Function prototypes
int linearSearch(int haystack[], int needle, int haylenght);

int main() {

    int haylenght = 10;
    int needle = 100;
    int heystack[haylenght];
    for (int i = 0; i < haylenght; i++){
        heystack[i] = i+1;
    }

    for(int loop = 0; loop < 10; loop++) {
        printf("%d ", heystack[loop]);
    }
    printf("\n");
    printf("linear search result: \n");
    int save = linearSearch(heystack, needle, haylenght);
    if( save == 0){
        printf("found\n");
    } else {
        printf("not found\n");
    }
    return 0;
}

int linearSearch(int haystack[], int needle, int haylenght) {
    for (int i = 0; i < haylenght; i++) {
        if(haystack[i] == needle) {
            return 0;
        }
    }
    return 1;
}
