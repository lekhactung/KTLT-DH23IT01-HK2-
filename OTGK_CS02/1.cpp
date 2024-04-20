#include <bits/stdc++.h>
using namespace std;

double delta(double a, double b, double c){
    return pow(b,2) - 4*a*c;
}

void tinhNghiem(double a, double b, double c){
    if( delta (a ,b ,c ) < 0 ){
        cout << "pt vo nghiem " << endl;
    } else if ( delta(a , b, c) > 0 ){
        double x1 = (-b + sqrt( delta (a, b, c))) / 2*a;
        double x2 = (-b - sqrt( delta (a, b, c))) / 2*a;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else {
        double nghiemKep = -b/2*a; 
        cout << "pt co nghiem kep = " << nghiemKep << endl;
    }
}

int main(){
    double a,b,c;
    cout << "Nhap he so a, b, c cua phuong trinh ax^2 + bx + c = 0 " << endl; 
    cout << "a = " ; cin >> a;
    cout << "b = " ; cin >> b;
    cout << "c = " ; cin >> c;
    tinhNghiem(a,b,c);
    return 0;
}