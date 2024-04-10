#include <iostream>
#include <cstring> // Thư viện để sử dụng các hàm xử lý chuỗi

using namespace std;

// Hàm đếm số lượng từ trong chuỗi
int demSoTu(const char chuoi[]) {
    int soTu = 0;
    bool dangTrongTu = false; // Biến để kiểm tra xem đang ở trong một từ hay không

    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (!isspace(chuoi[i]) && !dangTrongTu) {
            soTu++;
            dangTrongTu = true;
        }
        else if (isspace(chuoi[i])) {
            dangTrongTu = false;
        }
    }

    return soTu;
}

int main() {
    const int MAX_LENGTH = 100;
    char chuoi[MAX_LENGTH];

    cout << "Nhap vao chuoi: ";
    cin.getline(chuoi, MAX_LENGTH);

    // Gọi hàm demSoTu và in kết quả
    int ket_qua = demSoTu(chuoi);
    cout << "So luong tu trong chuoi: " << ket_qua << endl;

    return 0;
}
