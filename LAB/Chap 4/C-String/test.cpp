#include <iostream>
#include <cstring> // Thư viện để sử dụng các hàm xử lý chuỗi

using namespace std;

int main() {
    const int MAX_LENGTH = 11; // 10 ký tự password + ký tự kết thúc chuỗi ('\0')
    char password[MAX_LENGTH];

    bool daDangNhap = false;
    int soLanNhapLai = 3; // Số lần nhập lại tối đa

    while (soLanNhapLai > 0 && !daDangNhap) {
        // Nhập password từ người dùng
        cout << "Nhap password (" << MAX_LENGTH - 1 << " ky tu): ";
        cin.getline(password, MAX_LENGTH);

        // Hiển thị password dưới dạng ký tự "X"
        cout << "Password: ";
        for (int i = 0; i < strlen(password); i++) {
            cout << "X";
        }
        cout << endl;

        // Kiểm tra password có đúng không
        if (strcmp(password, "SinhVienCQ") == 0) {
            cout << "Dang nhap thanh cong!" << endl;
            daDangNhap = true;
        } else {
            cout << "Password khong chinh xac. Vui long nhap lai." << endl;
            soLanNhapLai--;
            if (soLanNhapLai > 0) {
                cout << "Ban con " << soLanNhapLai << " lan nhap lai." << endl;
            } else {
                cout << "Da het lan nhap lai. Chuc may man lan sau!" << endl;
            }
        }
    }

    return 0;
}
