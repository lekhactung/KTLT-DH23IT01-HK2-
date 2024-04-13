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

long bin_to_dec(long long n){
    if (n == 0)
        return 0;
    return bin_to_dec(n/10)*2 + n%10;
}

int main() {
    // int numRows;
    // cout << "Nhập số hàng của tam giác Pascal: ";
    // cin >> numRows;

    long long n ;
    cin >> n ;

    cout << bin_to_dec(n);

    return 0;
}
