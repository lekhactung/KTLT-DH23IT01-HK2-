#include <iostream>
#include <cstring> // Thư viện để sử dụng các hàm xử lý chuỗi

using namespace std;

// Hàm kiểm tra xem một chuỗi có phải là chuỗi palindrome hay không
bool kiemTraPalindrome(const char chuoi[]) {
    int doDai = strlen(chuoi);

    // Duyệt qua từng ký tự của chuỗi, so sánh ký tự đầu và cuối, ký tự thứ hai và ký tự cuối - 1, và cứ tiếp tục như vậy
    for (int i = 0; i < doDai / 2; i++) {
        if (chuoi[i] != chuoi[doDai - i - 1]) {
            // Nếu có bất kỳ sự khác biệt nào giữa các ký tự tương ứng, chuỗi không phải là palindrome
            return false;
        }
    }
    // Nếu không có sự khác biệt nào, chuỗi là palindrome
    return true;
}

int main() {
    const int MAX_LENGTH = 100;
    char chuoi[MAX_LENGTH];

    cout << "Nhap vao chuoi: ";
    cin.getline(chuoi, MAX_LENGTH);

    // Gọi hàm kiemTraPalindrome và in kết quả
    if (kiemTraPalindrome(chuoi)) {
        cout << "Chuoi la palindrome" << endl;
    } else {
        cout << "Chuoi khong la palindrome" << endl;
    }

    return 0;
}
