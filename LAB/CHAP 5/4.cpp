#include <bits/stdc++.h>
using namespace std;

struct sinhvien {
    string mssv; 
    string hoten;
    string diachi;
    int namsinh;
    double diemtoan;
    double diemvan;
    double diemnn;
};

void nhapttsv(sinhvien &sv){
    cout << "Nhap ma so sinh vien: " ;
    getline(cin,sv.mssv);
    cout << endl << "Nhap ho ten sinh vien: ";
    getline(cin,sv.hoten);
    cout << endl << "Nhap dia chi: ";
    getline(cin,sv.diachi);
    cout << endl << "Nhap nam sinh: ";
    cin >> sv.namsinh;
    cout << endl << "Nhap diem toan: ";
    cin >> sv.diemtoan;
    cout << endl << "Nhap diem van: ";
    cin >> sv.diemvan;
    cout << endl << "Nhap diem ngoai ngu: ";
    cin >> sv.diemnn;

}

void xuattts(sinhvien &sv){
    cout << "MSSV : " << sv.mssv << endl;
    cout << "Ho ten: " << sv.hoten << endl;
    cout << "Dia chi: " << sv.diachi << endl;
    cout << "Diem toan: " << sv.diemtoan << endl;
    cout << "Diem van: "<< sv.diemvan << endl;
    cout << "Diem ngoai ngu: " << sv.diemnn << endl;
}

double tinhdiem_tb(sinhvien &sv){
    double diemtb = ((sv.diemtoan + sv.diemvan) * 2 + sv.diemnn) / 5;
    return diemtb;
}

int xeploai(sinhvien sv){
    if(tinhdiem_tb(sv)>=8){
        return 1;
    } else if (tinhdiem_tb(sv) >=6.5){
        return 2;
    }else if (tinhdiem_tb(sv) >=5){
        return 3;
    } 
    return 4;
}

int main(){
    int siso;
    cout << "Nhap si so sinh vien trong lop: ";
    cin >> siso;


    
    return 0;
}