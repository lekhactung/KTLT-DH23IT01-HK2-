#include <iostream>
#include <cstring> // Thư viện để sử dụng các hàm xử lý chuỗi

using namespace std;

// Hàm chuyển đổi số tháng thành tên tháng
string chuyenDoiTenThang(int thang) {
    switch (thang) {
        case 1:
            return "January";
        case 2:
            return "February";
        case 3:
            return "March";
        case 4:
            return "April";
        case 5:
            return "May";
        case 6:
            return "June";
        case 7:
            return "July";
        case 8:
            return "August";
        case 9:
            return "September";
        case 10:
            return "October";
        case 11:
            return "November";
        case 12:
            return "December";
        default:
            return "";
    }
}

int main() {
    const int MAX_LENGTH = 100;
    char ngayThangNam[MAX_LENGTH];

    cout << "Nhap ngay thang nam theo dinh dang 'mm/dd/yy': ";
    cin.getline(ngayThangNam, MAX_LENGTH);

    // Phân tích chuỗi đầu vào để lấy ra tháng, ngày và năm
    char* thang_str = strtok(ngayThangNam, "/");
    char* ngay_str = strtok(NULL, "/");
    char* nam_str = strtok(NULL, "/");

    // Chuyển đổi các chuỗi số thành các giá trị nguyên
    int thang = atoi(thang_str);
    int ngay = atoi(ngay_str);
    int nam = atoi(nam_str);

    // Chuyển đổi số tháng thành tên tháng
    string tenThang = chuyenDoiTenThang(thang);

    // In ra kết quả theo định dạng "Tháng Ngày, Năm"
    cout << "Ket qua: " << tenThang << " " << ngay << ", 19" << nam << endl;

    return 0;
}
