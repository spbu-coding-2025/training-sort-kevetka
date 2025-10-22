#include "stdio.h"

void sort(int* arr, int arrLen)  {
    int LenghtSubSicle = arrLen;
    for (int i = 0; i < arrLen; ++i) {
        for (int j = 0; j < LenghtSubSicle; ++j)  {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        LenghtSubSicle--;
    } 
}

int main(int argc, char* argv[]) {
    int arr[100] = {};
    int counter = 0;

    for (int i = 0; i < 100; i++) {
        if (scanf("%d", &arr[i]) == 1) {
            counter += 1;
            char next_char = getchar();
            if (next_char == '\n'){
                break;
            }
            ungetc(next_char, stdin);
        }
        else{
            break;
        }
    }
    
    sort(arr, counter);

    for (int i = 0; i < counter; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}