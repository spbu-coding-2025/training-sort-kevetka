#include "stdio.h"

void sort(int* arr, int start, int end)  {
    if (end - start > 1) {
        int indexLessElement = start - 1;
        int referenceElement = arr[end - 1];
        for (int index = start; index < end - 1; ++index) {
            if (arr[index] <= referenceElement) {
                indexLessElement += 1;
                if (arr[indexLessElement] > referenceElement) {
                    int temp = arr[indexLessElement];
                    arr[indexLessElement] = arr[index];
                    arr[index] = temp;
                }
            }
        }
        int temp = arr[indexLessElement + 1];
        arr[indexLessElement + 1] = arr[end - 1];
        arr[end - 1] = temp;
        sort(arr, 0, indexLessElement);
        sort(arr, indexLessElement + 2, end);
    }
}

int main(int argc, char* argv[]) {
    int arr[100] = {};
    int counter = 0;

    while (scanf("%d", &(arr[counter])) && counter < 100) {
        counter += 1;
    }

    sort(arr, 0, counter + 1);

    for (int i = 0; i < counter; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}