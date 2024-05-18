#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

struct sanpham {
    char masp[10];
    string tensp;
    double dongia;
    int sltonkho;
};

void nhapsp(sanpham &sp){
    cout << "Nhap ma san pham : ";
    cin.get(sp.masp,20);
    cin.ignore();
    cout << "Nhap ten san pham : ";
    getline(cin,sp.tensp);
    cout << "Nhap don gia : ";
    cin >> sp.dongia;
    cin.ignore();
    // cout << "So luong ton kho :";
    // cin >> sp.sltonkho;
    // cin.ignore();
    sp.sltonkho = rand() %10 +1;
}

void xuatsp (sanpham sp){
    cout << "San pham : " << sp.tensp << endl;
    cout << "Ma san pham : " << sp.masp << endl;
    cout << "Don gia : " << sp.dongia << endl;
    cout << "So luong ton kho : " << setprecision(3) << fixed  << sp.sltonkho << endl;
}

void suathongtin(sanpham &sp,int slsp){
    char masp [10];
    cout << "Nhap ma san pham can sua : ";
    cin.getline(sp.masp,10);
    for(int i=0; i< slsp ; i++){
        if(strcmp(masp,sp.masp)==0){
            cout << "Nhap thong tin moi cho san pham : ";
            nhapsp(sp);
            cout << "Da sua thong tin!";
        }
    }
}

bool sosanhslsp(sanpham a,sanpham b){
    return a.sltonkho < b.sltonkho;
}

void sapxep(sanpham *sp,int slsp){
    for(int i=0;i<slsp;i++){
        for(int j = i+1;j<slsp;i++){
            if(sosanhslsp(sp[i],sp[j])){
                sanpham tmp = sp[i];
                sp[i] = sp[j];
                sp [j]= tmp;
            }
        }
    }
}

int main(){
    srand(time(NULL));
    int slsp;
    cin >> slsp;
    cin.ignore();
    struct sanpham sp[slsp];
    for(int i=0;i<slsp;i++){
        nhapsp(sp[i]);
    }
    sapxep(sp,slsp);
    for(int i=0;i<slsp;i++){
        xuatsp(sp[i]);
    }

    return 0;
}