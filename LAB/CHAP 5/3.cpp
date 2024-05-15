#include <bits/stdc++.h>
using namespace std;

#define namhientai 2024;

struct nhanvien{
    string manv;
    string hoten;
    int namvaolam;
    int namsinh;
};

void nhapthongtin(nhanvien &nv){
    cout << "Nhap ma nhan vien : ";
    getline(cin,nv.manv);
    cout << "Nhap ho va ten nhan vien : ";
    getline(cin,nv.hoten);
    cout << "Nhap nam vao lam: ";
    cin >> nv.namvaolam;
    cout << "Nhap nam sinh: ";
    cin >> nv.namsinh;
}

void xuatthongtin(nhanvien &nv){
    cout << "Ma nhan vien : " << nv.manv;
    cout << "\nHo va ten: " << nv.hoten;
    cout << "\nNam vao lam : " << nv.namvaolam;
    cout << "\nNam sinh : " << nv.namsinh;
}

void tuoi(nhanvien nv){
    cout <<  2024 - nv.namsinh;
}

void thamnien(nhanvien nv){
    cout << 2024 - nv.namvaolam;
}

int main(){
    nhanvien nv;
    nhapthongtin(nv);
    xuatthongtin(nv);
    cout << endl ;
    cout  << "Tham nien :";
    thamnien(nv);
    cout << endl ;
    cout << "Tuoi :";
    tuoi(nv);
    return 0;
}