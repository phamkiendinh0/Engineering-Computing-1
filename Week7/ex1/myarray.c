
#include <stdio.h>
void printArray(int *ptr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d element: %d\n", i , *ptr);
        ptr++;
    }
}

void printArrayReverse(int *ptr, int size) {
    printf("Print Reverse\n");
    int counter = 1;
    for (int i = size; i != 0; i--) {
        printf("%d element: %d\n", counter , *(ptr + i - 1));
        counter++;
    }
}

int findMax(int *ptr, int size) {
    int max = 0;
    for (int i = 0; i < size; i++) {
        if (*ptr > max) {
            max = *ptr;
            ptr++;
        }
        else {
            ptr++;
        }
    }
    return max;
}

int find(int *ptr, int size, int num) {
    int result = 0;
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (*ptr == num) {
            found = 1;
            break;
        }
        else {
            ptr++;
        }
    }

    if (found) {
        return 1;
    }
    else {
        return 0;
    }

    return num;
}
