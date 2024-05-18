#include <bits/stdc++.h>
using namespace std;

struct NTN{
    int ngay,thang, nam;
};

NTN nhapNTN(){
    NTN ngayxb;
    ngayxb.ngay = rand() % 31 + 1;
    ngayxb.thang = rand() % 12 + 1;
    ngayxb.nam = rand() % 50 + 1970;
    return ngayxb;
}

struct sach{
    NTN ngayxb;
    char tensach[20];
    char tentacgia[20];
};

void nhapsach(sach &a){
    cout << "Nhap ten sach : ";
    cin.get(a.tensach,20);
    cin.ignore();
    cout << "Nhap ten tac gia : ";
    cin.get(a.tentacgia,20);
    cin.ignore();
    a.ngayxb = nhapNTN();
}

void xuatsach(sach a){
    cout << a.tensach << " duoc viet boi " << a.tentacgia << " vao ngay " << a.ngayxb.ngay << "/" << a.ngayxb.thang << "/" << a.ngayxb.nam << endl;
}

int main(){
    srand(time(NULL));
    sach a[2];
    for(int i=0;i<2;i++){
        nhapsach(a[i]);
    }
    
    for(int i=0;i<2;i++){
        if(strcmp(a[i].tentacgia,"Tran Dung")==0){
            cout << a[i].tensach << " duoc viet boi " << a[i].tentacgia << " vao ngay " << a[i].ngayxb.ngay << "/" << a[i].ngayxb.thang << "/" << a[i].ngayxb.nam << endl;
        }
    }
    return 0;
}