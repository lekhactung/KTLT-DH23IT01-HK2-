#include <iostream>
#include <string>
#include <string.h>
#include<fstream>
#include <time.h>
using namespace std;

struct SinhVien {
    long long MSSV;
    string hoten,malop;
    float diemtb;
};

struct DSSV {
    SinhVien *sinhvien;
    int soluong;
};

void nhapsv(SinhVien &sv){
    cout <<"Nhap MSSV : "; cin >> sv.MSSV; cin .ignore();
    cout <<"Nhap ho ten : "; getline(cin,sv.hoten);
    cout << "Nhap ma lop : ";getline(cin,sv.malop);
    cout <<"Nhap diem trung binh: "; cin >> sv.diemtb;
    // cin.ignore();
}

void xuatsv(const SinhVien sv){
    cout << "MSSV : " << sv.MSSV << endl;
    cout << "Ho ten : " << sv.hoten << endl;
    cout << "Ma lop : " << sv.malop << endl;
    cout << "Diem tb : " << sv.diemtb << endl;

}

void nhapdssv(DSSV &ds){
    cout <<"Nhap so luong sinh vien : ";
    cin >> ds.soluong;
    ds.sinhvien = new SinhVien [ds.soluong];
    for(int i=0;i<ds.soluong;i++){
        cout <<"Nhap sinh vien thu " << i+1 <<endl;
        cin.ignore();
        nhapsv(ds.sinhvien[i]);
    }
}

void xuatdssv(const DSSV ds){
    for(int i=0;i<ds.soluong;i++){
        cout << "++++++++++" << endl;
        xuatsv(ds.sinhvien[i]);
    }
}

void ghifiledssv(DSSV ds){
    ofstream ofs;
    ofs.open("test.txt",ios::out);
    if(ofs.is_open()){
        ofs << ds.soluong << endl;
        for(int i=0;i<ds.soluong;i++){
            ofs << ds.sinhvien[i].MSSV <<"#"<< ds.sinhvien[i].hoten <<"#"<< ds.sinhvien[i].malop <<"#"<< ds.sinhvien[i].diemtb <<endl;
        }
    }else {
        cout << "Khong mo duoc file!";
    }
    ofs.close();
}

void docfiledssv (DSSV &ds){
    ifstream ifs;
    ifs.open("test.txt",ios::in);
    if(ifs.is_open()){
        ifs >> ds.soluong;
        ifs.ignore();
        ds.sinhvien = new SinhVien [ds.soluong];
        for(int i=0;i<ds.soluong;i++){
            ifs >> ds.sinhvien[i].MSSV; ifs.ignore();
            getline(ifs,ds.sinhvien[i].hoten,'#');
            getline(ifs,ds.sinhvien[i].malop,'#');
            ifs >> ds.sinhvien[i].diemtb; ifs.ignore();
        }
    } else {
        cout <<"Khong mo duoc file!";
    }
    ifs.close();
}

int demtheomalop(const DSSV ds){
    int cnt =0;
    for(int i=0;i<ds.soluong;i++){
        if(ds.sinhvien[i].malop == "cs20" || ds.sinhvien[i].malop== "CS20"){
            cnt++;
        }
    }
    return cnt;
}

int demdiemtb(const DSSV ds){
    int cnt =0;
    for(int i=0;i<ds.soluong;i++){
        if(ds.sinhvien[i].diemtb >=8){
            cnt++;
        }
    }
    return cnt;
}
void swap(SinhVien &a,SinhVien &b){
    SinhVien c = a;
    a = b;
    b = c;
}
void sapxep(DSSV &ds){
    for(int i=0;i<ds.soluong;i++){
        for(int j=i;j<ds.soluong;j++){
            if(ds.sinhvien[i].diemtb < ds.sinhvien[j].diemtb){
                swap(ds.sinhvien[i],ds.sinhvien[j]);
            }
        }
    }
}

void capnhatdssv(DSSV &ds){
    int pos;
    cout <<"Nhap so thu tu cua sinh vien can cap nhat thong tin : ";cin >> pos;
    cin.ignore();
    nhapsv(ds.sinhvien[pos-1]);
}

void xoasv(DSSV &ds){
    int pos;
    cout <<"Nhap vi tri sinh vien can xoa: " ; cin >> pos;
    ds.soluong--;
    for(int i=pos-1;i<ds.soluong;i++){
        ds.sinhvien[i]=ds.sinhvien[i+1];
    }
}

void themsv(DSSV &ds,SinhVien sv){
   if(ds.sinhvien == NULL){
        ds.soluong=1;
        ds.sinhvien = new SinhVien[ds.soluong];
        ds.sinhvien[0]=sv;
   } else{
        SinhVien *tmp = ds.sinhvien;
        ds.soluong++;
        ds.sinhvien = new SinhVien[ds.soluong];
        nhapsv(sv);
        for(int i=0;i<ds.soluong;i++){
            ds.sinhvien[i]=tmp[i];
        }
        ds.sinhvien[ds.soluong] = sv;
   
   }
}
int main(){
    system("cls"); 
    srand(time(NULL));
    SinhVien sv;
    DSSV ds;
    // nhapsv(sv);
    // xuatsv(sv); SinhVien sv
    // nhapsv(sv);

    // nhapdssv(ds);
    // ghifiledssv(ds);
    // xuatdssv(ds);
    docfiledssv(ds);
    // xuatdssv(ds);
    // cout << "So luong sinh vien thuoc lop CS20 la : " << demtheomalop(ds);
    // cout <<"So luong sinh vien co diem trung binh tren 8 la: " << demdiemtb(ds);
    // sapxep(ds);
    // capnhatdssv(ds);
    // xoasv(ds);
    // xuatdssv(ds);
    // ghifiledssv(ds);
    themsv(ds,sv);
    ghifiledssv(ds);
    // cout << ds.soluong;
    return 0;
}