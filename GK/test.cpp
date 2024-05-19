#include <iostream>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

// Hàm tìm và lưu các số nguyên tố
int* findAndStorePrimes(int** arr, int rows, int cols, int& primeCount) {
    const int maxSize = rows * cols; // Kích thước tối đa có thể có
    int* primeNumbers = new int[maxSize];
    primeCount = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (isPrime(arr[i][j])) {
                primeNumbers[primeCount++] = arr[i][j];
            }
        }
    }

    return primeNumbers;
}

int main() {
    // Khởi tạo mảng 2 chiều động
    const int rows = 3;
    const int cols = 3;
    int** arr = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new int[cols];
    }

    // Gán giá trị cho mảng
    int values[rows][cols] = {
        {11, 12, 13},
        {14, 15, 16},
        {17, 18, 19}
    };

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = values[i][j];
        }
    }

    // Biến đếm số lượng số nguyên tố
    int primeCount = 0;
    int* primeNumbers = findAndStorePrimes(arr, rows, cols, primeCount);

    // In ra các số nguyên tố đã tìm được
    cout << "Cac so nguyen to trong mang la: ";
    for (int i = 0; i < primeCount; ++i) {
        cout << primeNumbers[i] << " ";
    }
    cout << endl;

    // Giải phóng bộ nhớ
    delete[] primeNumbers;
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
