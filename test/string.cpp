#include <iostream>
using namespace std;


//CAU 5
struct HocSinh {
    char name[50];
    int age;
    float grade;
};

struct DSHS {
    HocSinh *hs;
    int soluong;
};

void nhaptths(HocSinh &hs){
    cout << "Nhap ten: "; cin.get(hs.name,50);
    cin.ignore();
    cout << "Nhap tuoi: "; cin >> hs.age;
    cout << "Nhap diem trung binh : "; cin >> hs.grade;
    cin.ignore();
}

void xuattths(const HocSinh hs){
    cout << "Ten : " << hs.name << endl;
    cout << "Tuoi : " << hs.age << endl;
    cout << "Diem TB: " << hs.grade << endl;
}

void nhapdshs(DSHS &ds){
    cout << "Nhap so luong hoc sinh : " ; cin >> ds.soluong;
    cin.ignore();
    ds.hs = new HocSinh [ds.soluong];
    for(int i=0;i<ds.soluong;i++){
        nhaptths(ds.hs[i]);
    }
}

void xuatdshs(const DSHS ds){
    for(int i=0;i<ds.soluong;i++){
        xuattths(ds.hs[i]);
    }
}

void swap(HocSinh &hs1, HocSinh &hs2){
    HocSinh tmp = hs1;
    hs1 = hs2;
    hs2 = tmp;
}

void sapxep(DSHS &ds){
    for(int i=0;i<ds.soluong;i++){
        for(int j=i+1;j<ds.soluong;j++){
            if(ds.hs[i].grade < ds.hs[j].grade){
                swap(ds.hs[i],ds.hs[j]);
            }
            if(ds.hs[i].grade == ds.hs[j].grade){
                if(ds.hs[i].name < ds.hs[j].name){
                    swap(ds.hs[i],ds.hs[j]);
                }
            }
        }
    }
}

int main(){
    DSHS ds;
    nhapdshs(ds);
    xuatdshs(ds);
    sapxep(ds);
    cout << "//////////" << endl;
    xuatdshs(ds);
    return 0;
}