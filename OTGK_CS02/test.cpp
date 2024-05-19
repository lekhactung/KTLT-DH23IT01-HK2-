#include <iostream>

// Hàm đệ quy để sắp xếp mảng bằng Bubble Sort
void recursiveBubbleSort(int arr[], int n) {
    // Cơ sở đệ quy: nếu kích thước mảng là 1, mảng đã được sắp xếp
    if (n == 1)
        return;

    // Thực hiện một vòng sắp xếp
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            std::swap(arr[i], arr[i + 1]);
        }
    }

    // Gọi đệ quy để sắp xếp phần còn lại của mảng
    recursiveBubbleSort(arr, n - 1);
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, -90};
    int n = sizeof(arr) / sizeof(arr[0]);

    recursiveBubbleSort(arr, n);

    std::cout << "Sorted array: \n";
    for (int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";
    return 0;
}
