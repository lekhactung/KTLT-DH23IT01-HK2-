#include <bits/stdc++.h>
using namespace std;

struct  phongban {
    string maphongban;
    string tenphongban;
};


int main(){
    struct phongban pb;
    cout << "Nhap ma phong ban: ";
    getline(cin,pb.maphongban);
    cout << "Nhap ten phong ban: ";
    getline(cin,pb.tenphongban);
    cout << "Ma phong ban : " << pb.maphongban << endl;
    cout << "Ten phong ban : " << pb.tenphongban;
    return 0;
}