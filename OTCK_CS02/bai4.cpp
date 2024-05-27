#include <iostream>
#include <fstream>
#include <string>
using namespace std;
const int maxv = 50;

struct SinhVien{
    string mssv;
    string hoten;
    string malop;
    float diemtb;

};

void nhapsv(SinhVien &sv){
        cout << "Nhap ma so sinh vien : " ; cin >> sv.mssv;
        cin.ignore();
        cout << "Nhap ho va ten : " ; getline(cin,sv.hoten); 
        sv.malop = "DH23CS02";
        // cout << "Nhap ma lop : " ; getline(cin,sv.malop);
        cout << "Nhap diem trung binh : "; cin >> sv.diemtb;
    }

void xuatsv (SinhVien sv){
        cout << "MSSV: " << sv.mssv << endl;
        cout << "Ho va ten: " << sv.hoten << endl;
        cout << "Ma lop: " << sv.malop << endl;
        cout << "Diem trung binh: " << sv.diemtb << endl;
    }

struct DSSV{
    SinhVien *sinhvien;
    int soluong;


};

void nhapdssv(DSSV &sv){
    do{
        cout << "Nhap so luong sinh vien : "; cin >> sv.soluong;
        if(sv.soluong<0 || sv.soluong >maxv){
            cout << "So luong khong hop le, vui long nhap lai ! \n";
        }
        cin.ignore();
    }while(sv.soluong<0 || sv.soluong >maxv);
    sv.sinhvien = new SinhVien[sv.soluong];
    for(int i=0;i<sv.soluong;i++){
        cout << "Nhap sinh vien thu " << i+1 << endl;
        nhapsv(sv.sinhvien[i]);
    }
}

void xuatdssv(DSSV sv){
    for(int i=0;i<sv.soluong;i++){
        cout << "////////////////////" << endl;
        cout  << "MSSV: "<< sv.sinhvien[i].mssv << endl;
        cout  << "Ho va ten: "<< sv.sinhvien[i].hoten << endl;
        cout  << "Ma lop: "<< sv.sinhvien[i].malop << endl;
        cout  << "Diem trung binh: "<< sv.sinhvien[i].diemtb << endl;
    }
}
void nhapfiledssv(DSSV sv){
    ofstream ofs;
    ofs.open("bai4.txt",ios::out);
    if(ofs.is_open()){
        ofs  << sv.soluong << endl;
        for(int i=0;i<sv.soluong;i++){
            ofs << sv.sinhvien[i].mssv << "#" << sv.sinhvien[i].hoten << "#" << sv.sinhvien[i].malop <<"#"<<sv.sinhvien[i].diemtb << endl;
        }
    } else {    
        cout << "Khong mo duoc file";
    }
}
void docfiledssv(DSSV &sv){
    ifstream ifs;
    ifs.open("bai4.txt",ios::in);
    ifs >> sv.soluong;
    ifs.ignore(1);
    sv.sinhvien = new SinhVien[sv.soluong];
    for(int i=0;i<sv.soluong;i++){
        getline(ifs,sv.sinhvien[i].mssv,'#');
        getline(ifs,sv.sinhvien[i].hoten,'#');
        getline(ifs,sv.sinhvien[i].malop,'#');
        ifs >> sv.sinhvien[i].diemtb;
        ifs.ignore();

    }
}

int demmssv(const DSSV sv){
    int cnt =0;
    for(int i=0;i<sv.soluong;i++){
        if(sv.sinhvien[i].malop == "CS20"){
            cnt++;
        }
    }
    return cnt;
}

int demdiemtb(const DSSV sv){
    int cnt=0;
    for(int i=0;i<sv.soluong;i++){
        if(sv.sinhvien[i].diemtb >=8){
            cnt++;
        }
    }
    return cnt;
}
void swap (SinhVien &a,SinhVien &b){
    SinhVien tmp = a;
    a = b;
    b = tmp;
}

void sapxep(DSSV sv){
    for(int i=0;i<sv.soluong;i++){
        for(int j=i+1;j<sv.soluong;j++){
            if(sv.sinhvien[i].diemtb <= sv.sinhvien[j].diemtb){
                swap(sv.sinhvien[i],sv.sinhvien[j]);
            }
        }
    }
}

void capnhatttsv(DSSV &sv){
    int pos;
    cout <<"Nhap thu tu cua sinh vien can sua thong tin :";
    cin >> pos;
    // ofstream ofs;
    // ofs.open("bai4.txt",ios::in);
    // nhapsv(sv.sinhvien[pos]);
    // if(ofs.is_open()){   
    //     ofs << sv.sinhvien[pos].mssv << "#" << sv.sinhvien[pos].hoten << "#" << sv.sinhvien[pos].malop <<"#"<<sv.sinhvien[pos].diemtb << endl;
    // } else {    
    //     cout << "Khong mo duoc file";
    // }
    // ofs.close();
    nhapsv(sv.sinhvien[pos-1]);
}

int main(){
    system("cls");
    SinhVien sv;
    DSSV dssv;
    // nhapdssv(dssv);
    // nhapfiledssv(dssv);
    docfiledssv(dssv);
    // xuatdssv(dssv);
    //cout << "Co " << demmssv(dssv) << " sinh vien thuoc lop CS20" << endl;
    //cout << "Co " << demdiemtb(dssv) << " sinh vien co diem trung binh >=8" << endl;
    sapxep(dssv);
    // xuatdssv(dssv);
    capnhatttsv(dssv);
    nhapfiledssv(dssv);
    return 0;
}