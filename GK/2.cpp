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

int main(){
    srand(time(NULL));
    int n,choice;
    int *a;
    do{
        menu();
        cout << "//CHON CHUONG TRINH//"; cin >> choice;
        system("cls");

        switch ()
        {
        case /* constant-expression */:
            /* code */
            break;
        
        default:
            break;
        }

    } while(choice !=0);
    free(a);
    return 0;
}