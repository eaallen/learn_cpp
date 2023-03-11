#include <iostream>
#include <logger.cpp>

int main() {
    int arr[5] = {66, 66, 66};  // array with 5 elements of type int
    int numbers[]{1, 2, 3, 4, 5, 6, 7};

    logger::warn("Printing first arrary", sizeof(arr) / sizeof(int));

    for (int i : arr) {
        logger::success(i);
    }

    for (auto i : numbers) {
        logger::warn(i);
    }

    return 0;
}