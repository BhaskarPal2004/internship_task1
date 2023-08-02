#include <iostream>

int findNonUniqueDuplicate(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0)
            continue;

        for (int j = i + 1; j < size; ++j) {
            if (arr[i] == arr[j]) {
                return arr[i];
            }
        }

        arr[i] = -arr[i];
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 4, 2, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int nonUniqueDuplicate = findNonUniqueDuplicate(arr, size);
    if (nonUniqueDuplicate != -1) {
        std::cout << "The non-unique duplicate element is: " << nonUniqueDuplicate << std::endl;
    } else {
        std::cout << "No non-unique duplicate found in the array." << std::endl;
    }

    return 0;
}

