#include <bits/stdc++.h>
using namespace std;

struct phanso{
    int tu;
    int mau;
};

int UCLN (int a, int b) {
    while(b!=0){
        int t = b; 
        b = a % b; 
        a = t; 
    }
    return a;
}

void rutgon (phanso &ps){
    ps.tu /= UCLN(ps.tu,ps.mau);
    ps.mau /= UCLN(ps.tu,ps.mau);

}

phanso tong (phanso a,phanso b){
    phanso ketqua;
    ketqua.tu = a.tu * b.mau + b.tu * a.mau;
    ketqua.mau = a.mau * b.mau;
    rutgon(ketqua);
    return ketqua;
}

phanso hieu (phanso a,phanso b){
    phanso ketqua;
    ketqua.tu = a.tu * b.mau - b.tu * a.mau;
    ketqua.mau = a.mau * b.mau;
    rutgon(ketqua);
    return ketqua;
}

phanso tich (phanso a,phanso b){
    phanso ketqua;
    ketqua.tu = a.tu *b.tu;
    ketqua.mau = a.mau * b.mau;
    rutgon(ketqua);
    return ketqua;
}

phanso thuong (phanso a,phanso b){
    phanso ketqua;
    ketqua.tu = a.tu *b.mau;
    ketqua.mau = a.mau * b.tu;
    rutgon(ketqua);
    return ketqua;
}

void inps(phanso ps){
    cout << ps.tu << "/" << ps.mau << endl;
}

int main(){
    phanso ps1;
    cout << "Nhap gia tri tu va mau cua phan so thu nhat : ";
    cin >> ps1.tu >> ps1.mau;
    
    phanso ps2;
    cout << "Nhap gia tri tu va mau cua phan so thu hai : ";
    cin >> ps2.tu >> ps2.mau;

    phanso ketquatong = tong (ps1,ps2);
    phanso ketquahieu = hieu (ps1,ps2);
    phanso ketquatich = tich (ps1,ps2);
    phanso ketquathuong = thuong (ps1,ps2);
    inps (ketquatong);
    inps (ketquahieu);
    inps (ketquatich);
    inps (ketquathuong);
    return 0;
}