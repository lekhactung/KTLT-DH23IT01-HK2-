#include <iostream>
#include <math.h>
using namespace std ;

void menu(){
     cout << "0.Thoat chuong trinh\n"
        << "1.NHAP MANG\n"
        << "2.XUAT MANG\n"
        << "3.DEM SO LUONG PHAN TU LA SO CHINH PHUONG\n"
        << "4.KIEM TRA SO HOAN THIEN\n"
        << "5.KIEM TRA SO AM\n"
        << "6.KIEM TRA SO DUONG\n"
        << "7.KIEM TRA SO NGUYEN TO\n"
        << "8.DIA CHI SO CHINH PHUONG DAU TIEN TRONG MANG\n"
        << "9.DIA CHI SO HOAN THIEN CUOI CUNG TRONG MANG\n"
        << "10.DIA CHI SO NHO NHAT XUAT HIEN DAU TIEN TRONG MANG\n"
        << "11.DIA CHI SO NHO NHAT XUAT HIEN CUOI CUNG TRONG MANG\n"
        << "12.XOA PHAN TU \n"
        << "13.SAP XEP MANG GIAM DAN\n"
        << "14.SAP XEP MANG TANG DAN\n"
        << "15.SAP XEP NUA DAU TANG DAN, NUA SAU GIAM DAN\n"
        << "16.GOP 2 MANG \n"
        << "17.GOP 2 MANG DA TANG DAN LAI THANH 1 MANG VA CUNG TANG DAN\n";

}
void newint(int *&a,int n){
    a = new int[n];
}
void free(int *&a){
    delete []a;
    a = nullptr;
}
void input_1dArr(int *&a,int &n){
    do{
        cout << "Nhap so luong phan tu trong mang: " ; cin >> n;
        if(n <= 0){
            cout <<"So luong phan tu khong hop le, vui long nhap lai\n";
        }
    } while ( n <= 0);
    newint(a,n);
    for(int i=0;i<n;i++){
        a[i] = rand() %10+1;
    }
}
void output_1dArr(int *a,int n){
    for(int i =0 ;i<n;i++){
        cout <<  a[i] << " ";
    }
    cout << endl;
}
bool isscp(int n){
    if(n==1){
        return true;
    }
    for(int i=1;i<n;i++){
        if(sqrt(n)==i){
            return true;
        }
    }
    return false;
}
int cntscp(int *a,int n){
    int cnt =0;
    for(int i=0;i<n;i++){
        if(isscp(a[i])){
            cnt ++ ;
        }
    }
    return cnt;
}
bool issht(int n){
    int sum=0;
    for(int i =1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        return true;
    } return false;
}

bool isneg (int n){
    return n<0;
}

bool ispos (int n){
    return !isneg(n);
}

bool isprime (int n){
    if ( n<2 ){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int *f_scp (int *a,int n){
    for(int i=0;i<n;i++){
        if(isscp(a[i])){
            return &a[i];
        }
    }
    return nullptr;
}

int *l_sht (int *a,int n){
    for(int i= n-1;i>=0;i++){
        if(issht(a[i])){
            return &a[i];
        }
    }
    return nullptr;
}

void swap (int &a,int &b){
    int tmp = a; 
    a = b;
    b = tmp;
}

int *f_min (int *a, int n){
    int minindex =0;
    for(int i=1;i<n;i++){
        if (a[i] < a[minindex]){
            minindex = i;
        }
    }
    return  &a[minindex];
}

int *l_min (int *a, int n){
    int minindex =0;
    for(int i=1;i<n;i++){
        if (a[i] <= a[minindex]){
            minindex = i;
        }
    }
    return  &a[minindex];
}

void delArr(int *a, int &n){
    int vt; 
    cout << "Nhap vi tri cua phan tu can xoa tu 1 -> " << n << " : ";
    cin >> vt;
    for(int i=vt;i<n;i++){
        a[i-1] = a[i];
    }
    n--;
}

void sort_giamdan(int *a, int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[j] >= a[i]){
                swap(a[i],a[j]);
            }
        }
    }
}
void sort_tangdan(int *a, int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[j] <= a[i]){
               swap(a[i],a[j]);
            }
        }
    }
}
int main(){
    srand(time(NULL));
    int n,choice;
    int *a;
    
    input_1dArr(a,n);
    output_1dArr(a,n);
    // cout << f_scp(a,n);
    // delArr(a,n);
    sort_giamdan(a,n);
    output_1dArr(a,n);
    sort_tangdan(a,n);
    output_1dArr(a,n);
    free(a);
    return 0;
}