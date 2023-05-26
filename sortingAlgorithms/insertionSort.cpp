#include <iostream>

void insertionSorting(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int currentIndex = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > currentIndex) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = currentIndex;
    }
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    int array[] = {3, 11, 56, 78, 32, 12, 13};
    int size = sizeof(array) / sizeof(array[0]);
    insertionSorting(array, size);
    return 0;
}
