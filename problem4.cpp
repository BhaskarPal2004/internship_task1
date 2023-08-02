#include <iostream>
int findDuplicate(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        while (arr[i] != i + 1) {
            if (arr[i] == arr[arr[i] - 1]) {
                return arr[i];
            }
            std::swap(arr[i], arr[arr[i] - 1]);
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 4, 2, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int duplicate = findDuplicate(arr, size);
    if (duplicate != -1) {
        std::cout << "The duplicate element is: " << duplicate << std::endl;
    } else {
        std::cout << "No duplicate found in the array." << std::endl;
    }

    return 0;
}

