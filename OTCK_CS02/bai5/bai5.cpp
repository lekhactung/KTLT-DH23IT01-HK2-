#include <iostream>
#include <fstream>
#include <string>
#include<string.h>
using namespace std;

#define current_year 2024

struct NTN{
    int ngay;
    int thang;
    int nam;
};

struct Lop{
    string malop;
    string tenlop;
    string tenkhoa;
    int sosv;
    NTN ngaykhaigiang;
};

struct DSLop {
    Lop *lop;
    int soluong;
};

bool NTNavail ( NTN ntn){
    if(ntn.ngay <=0 || ntn.ngay >31){
        return false;
    }  else if(ntn.thang <=0 || ntn.thang >12){
        return false;
    } else if(ntn.nam<=0 || ntn.nam > current_year){
        return false;
    } 
    return true;
}

void nhapNTN(NTN &ntn){
    cout << "Nhap ngay : ";cin >> ntn.ngay;
    cout << "Nhap thang : "; cin >> ntn.thang;
    cout << "Nhap nam : "; cin >> ntn.nam;
}

void kiemtraNTN (NTN ntn){
    if(!NTNavail(ntn)){
        cout << "Ngay/Thang/Nam nhap vao khong hop le";
    } else {
        cout << "Ngay/Thang/nam nhap vao hop le";
    }
    cout << endl;
}

void nhaplop(Lop &cl){
    cout << "Nhap ma lop: "; getline(cin,cl.malop);
    cout << "Nhap ten lop: "; getline(cin,cl.tenlop);
    cout << "Nhap ten khoa: "; getline(cin,cl.tenkhoa);
    cout << "Nhap so luong sinh vien: "; cin >> cl.sosv;
    cout << "Nhap ngay khai giang " << endl; nhapNTN(cl.ngaykhaigiang);
    cin.ignore();

}

void xuatlop(Lop cl){
    cout << "Ma lop: " << cl.malop << endl;
    cout << "Ten lop: " << cl.tenlop << endl;
    cout << "Ten khoa: " << cl.tenkhoa << endl;
    cout << "So luong sinh vien: " << cl.sosv << endl;
    cout << "Ngay khai giang: " << cl.ngaykhaigiang.ngay <<"/" << cl.ngaykhaigiang.thang <<"/" << cl.ngaykhaigiang.nam << endl;

}

void nhapdslop(DSLop &ds){
    cout << "Nhap so luong lop : ";
    cin >> ds.soluong;
    cin.ignore();
    ds.lop = new Lop [ds.soluong];
    for(int i=0;i<ds.soluong;i++){
        nhaplop(ds.lop[i]);
    }
}

void xuatdslop(const DSLop ds){
    for(int i=0;i<ds.soluong;i++){
        xuatlop(ds.lop[i]);
    }
}

void nhapfiledslop(const DSLop ds){
    ofstream ofs;
    ofs.open("bai5.txt",ios::out);
    if(ofs.is_open()){
        ofs << ds.soluong << endl;
        for(int i=0;i<ds.soluong;i++){
            ofs << ds.lop[i].malop << "#" << ds.lop[i].tenlop << "#" << ds.lop[i].tenkhoa << "#" << ds.lop[i].sosv << "#" << ds.lop[i].ngaykhaigiang.ngay<<"/"<< ds.lop[i].ngaykhaigiang.thang<<"/" <<ds.lop[i].ngaykhaigiang.nam<< endl;
        }
    }else {
        cout  << "Khong mo duoc file!";
    }
    ofs.close();
}

void docfiledslop( DSLop &ds){
    ifstream ifs;
    ifs.open("bai5.txt",ios::in);
    if(ifs.is_open()){
        ifs >> ds.soluong;
        ds.lop = new Lop [ds.soluong];
        for(int i=0;i<ds.soluong;i++){
            ifs.ignore();
            getline(ifs,ds.lop[i].malop,'#');
            getline(ifs,ds.lop[i].tenlop,'#');
            getline(ifs,ds.lop[i].tenkhoa,'#');
            ifs  >> ds.lop[i].sosv;
            ifs.ignore();
            ifs >> ds.lop[i].ngaykhaigiang.ngay; ifs.ignore();
            ifs >> ds.lop[i].ngaykhaigiang.thang; ifs.ignore();
            ifs >> ds.lop[i].ngaykhaigiang.nam; 
        }
    } else{
        cout <<"Khong mo duoc file!";
    }
    ifs.close();
}

int demsoluongsv(DSLop ds){
    int sum=0;
    for(int i=0;i<ds.soluong;i++){
        if(ds.lop[i].tenkhoa =="cntt"){
            sum+=ds.lop[i].sosv;
        }
    }
    return sum;
}
int main(){
    system("cls");
    Lop cl;
    NTN ntn;
    DSLop ds;
    // nhapNTN(ntn);
    // kiemtraNTN(ntn);
    // nhaplop(cl);
    // xuatlop(cl);
    // nhapdslop(ds);
    // nhapfiledslop(ds);
    docfiledslop(ds);
    // xuatdslop(ds);
    cout << "So luong sv khoa cntt la: " << demsoluongsv(ds);
    return 0;
}