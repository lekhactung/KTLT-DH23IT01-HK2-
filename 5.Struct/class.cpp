#include <bits/stdc++.h>
using namespace std;


const int MAX_SIZE =2;
struct date{
    int day;
    int month;
    int year;
};

struct khoa{
    string tenKhoa[MAX_SIZE];
    string tenNganh[MAX_SIZE];
    string tenGV[MAX_SIZE];
};

struct OU {
    string name;
    string adress;
    date ngayThanhLap;
    khoa nganh;
    khoa giangVien;

};

int main(){
    struct OU ou;
    ou.name = "Truong Dai Hoc Mo TP.HCM";
    ou.adress ="KDC Nhon Duc, xa Nhon Duc, huyen Nha Be, TP.HCM";
    ou.ngayThanhLap.year  = 1990;
    for(int i=0;i<MAX_SIZE;i++){
            cout <<"Khoa thu " << i+1 << " ";
            getline(cin,ou.nganh.tenKhoa[i]);
        for(int j=0;j<MAX_SIZE;j++){
            cout << "Nganh thu "<< j+1 << " ";
            getline(cin,ou.nganh.tenNganh[j]);
        }
    }
    for(int i=0;i<MAX_SIZE;i++){
        for(int j=0;j<MAX_SIZE;j++){
            cout << "Giang vien thu "<< j+1;
            getline(cin,ou.giangVien.tenGV[j]);
        }
    }
    cout << "ten truong: "<< ou.name << endl;
    cout << "dia chi: "<<ou.adress << endl;
    cout << "nganh thay lap: " << ou.ngayThanhLap.year << endl;
    for(int i=0;i<MAX_SIZE;i++){
        cout << "Khoa " <<i+1 <<": " << ou.nganh.tenKhoa[i] <<endl;
        for(int j=0;j<MAX_SIZE;j++){
            cout << "Nganh " <<j+1 << " "<< ou.nganh.tenNganh[j] << endl;;   
        }
    }
    for(int i=0;i<MAX_SIZE;i++){
        cout << "Khoa " <<i+1 <<": " << ou.nganh.tenKhoa[i] <<endl;
        for(int j=0;j<MAX_SIZE;j++){
            cout << "Ten GV " <<j+1 <<": " << ou.giangVien.tenGV[j] << endl;   
        }
    }
    return 0;
}