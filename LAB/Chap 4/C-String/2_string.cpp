#include <bits/stdc++.h>

using namespace std;

string tachHoTen(string chuoi) {
    stringstream ss(chuoi);
    string ho, ten;
    getline(ss, ho, ','); 
    getline(ss, ten);     

    // Loại bỏ khoảng trắng thừa ở đầu và cuối
    ho.erase(0, ho.find_first_not_of(" ")); //xoaa tat ca khoang trang tu vi tri 0 den khi gap ky tu dau tien khong phai khoang trang
    ho.erase(ho.find_last_not_of(" ") + 1); //xoat tat ca khoang trang ke tu vi tri cuoi cung xuat hien chu cai 
    ten.erase(0, ten.find_first_not_of(" "));
    ten.erase(ten.find_last_not_of(" ") + 1);

    string hoTen = ho + " " + ten;
    return hoTen;
}

int main() {
    string chuoi_input;
    cout << "Nhap ho ten ";
    getline(cin, chuoi_input);

    string ket_qua = tachHoTen(chuoi_input);
    cout << "Ket qua:  " << ket_qua << endl;

    return 0;
}
