#include <bits/stdc++.h>
using namespace std;

const int MAX_LENGTH = 100;
bool nam_nhuan(int nam){
    if( nam % 4 ==0 && nam % 100 != 0  || nam % 400 ==0){
        return true;
    } 
    return false;
}

int so_ngay_trong_thang(int thang,int nam){
    if( thang == 2){
        if(nam_nhuan(nam)){
            return 29;
        } else {
            return 28;
        }
    } if (thang == 4 || thang == 6 || thang == 9 || thang == 11){
        return 30;
    } else {
        return 31;
    }
} 

int so_ngay_den_ngay (int ngay,int thang,int nam){
    int soNgay =ngay;
    for(int i=1;i<thang;i++){
        soNgay+=so_ngay_trong_thang(i,nam);
    }
    return soNgay;
}

int main(){
    char date[MAX_LENGTH];
    cin.get(date,MAX_LENGTH);
    char *ngay_str = strtok(date,"-");
    char *thang_str = strtok (NULL,"-");
    char *nam_str = strtok (NULL,"-");

    int ngay = atoi(ngay_str);
    int thang = atoi(thang_str);
    int nam = atoi(nam_str);

    cout << so_ngay_den_ngay(ngay,thang,nam);
    return 0;
}