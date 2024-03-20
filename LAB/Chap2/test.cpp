#include <iostream>
using namespace std;

// Hàm đệ quy tính giá trị của dòng row và cột col trong tam giác Pascal
int pascal(int row, int col) {
    if (col == 0 || col == row)
        return 1;
    else
        return pascal(row - 1, col - 1) + pascal(row - 1, col);
}

// Hàm đệ quy in ra tam giác Pascal
void printPascal(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << pascal(i, j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int numRows;
    cout << "Nhập số hàng của tam giác Pascal: ";
    cin >> numRows;

    printPascal(numRows);

    return 0;
}
