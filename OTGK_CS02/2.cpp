#include <bits/stdc++.h>
using namespace std;

const int MAX_LENGTH = 100;

void newInt (int *&arr, int n ){
    arr = new int [n];
}

void free (int *&arr, int n){
    delete []arr;
    arr = nullptr;
}

void input (int *&arr,int &n){
    do{
        cout <<"Nhap so luong phan tu: ";
        cin >> n;
        if(n<=0){
            cout << "So luong phan tu khong hop le, vui long nhap lai \n";
        }
    } while (n<=0);
    newInt(arr,n);
    for(int i =0 ;i<n;i++){
        cin >> arr[i];
    }
}

void output (int *arr,int n){
    for(int i =0 ;i<n;i++){
        cout <<  arr[i] << " ";
    }
    cout << endl;
}

void swap(int &a,int &b){
    int tmp = a;
    a =b;
    b = tmp;
}

bool isSCP (int n){
    for(int i=0;i<n;i++){
        int squareRoot = sqrt(n);
        if(squareRoot * squareRoot == n){
            return true;
        }
    }
    return false;
}

bool isSHT(int n){
    int sum =1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            sum+=i; 
        }
    } 
    return sum == n;
}

bool isNeg(int n){
    return n < 0 ? true : false;
}

bool isPos(int n){
    return !isNeg(n);
}

bool isPrime(int n){
    if(n<2){
        return false;
    } 
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int cntSCP(int *arr,int n){
    int cnt =0;
    for(int i=0;i<n;i++){
        if(isSCP(arr[i])){
            cnt ++;
        }
    }
    return cnt;
}

int *f_SCP_addr (int *arr,int n){
    if(arr!=NULL){
        for(int i=0;i<n;i++){
            if(isSCP(arr[i])){
                return &arr[i];
        }
    }
    }
    return nullptr;
}

int *l_SHT_addr (int *arr,int n){
    if(arr!=NULL){
        for(int i=n-1;i>=0;i--){
            if(isSHT(arr[i])){
                return &arr[i];
        }
    }
    }
    return nullptr;
}

int *f_min (int *arr,int n){
    int minIndex =0;
    if(arr!=NULL){
        for(int i=1;i<n;i++){
            if(arr[i]<arr[minIndex]){
                minIndex = i;
            }
        }
    }
    return &arr[minIndex];
}

int *l_min (int *arr,int n){
    int minIndex =0;
    if(arr!=NULL){
        for(int i=1;i<n;i++){
            if(arr[i]<=arr[minIndex]){
                minIndex = i;
            }
        }
    }
    return &arr[minIndex];
}

void delArr(int *arr, int &n, int pos ){
    for(int i= pos-1; i<=n;i++){
        arr[i] = arr[i+1];
    }
    n--;
}

void sort_tangDan(int *arr, int start, int end){
    for(int i=start;i<end;i++){
        for(int j=i+1;j<end;j++){
            if(arr[i] >= arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

void sort_giamDan(int *arr, int start, int end){
    for(int i=start;i<end;i++){
        for(int j=i+1;j<end;j++){
            if(arr[i] <= arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

void half_sort(int *arr, int n){
    int half = n/2;
    sort_tangDan(arr,0,n);
    sort_giamDan(arr,half,n);
}

int *gopmang (int *a,int n, int *b , int m){
    if(a != NULL && b != NULL){
    int *c;
    newInt(c,n+m);
        if(a!= NULL){
            int cnt=0;
            for(int i=0;i<n;i++) {
                c[cnt++] = a[i];
            }
            for(int i=0;i<m;i++) {
            c[cnt++] = b[i];
            }
       }
    return c;
    }
    return nullptr;
}  

int *sort_2_mang (int *a,int n, int *b, int m){
    int *c = gopmang(a,n,b,m);
    sort_tangDan(c,0,n+m);
    return c;
}
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
int main(){
    int choice;
    int n,m;
    int *a = NULL;
    do{
        menu();
        cout << "// CHON CHUONG TRINH//" << endl;
        cin >> choice;
        system("cls");

        switch (choice)
        {   
        case 0:{
            cout <<"Cam on da su dung chuong trinh! " << endl;
            break;
        }
        case 1:{
            input(a,n);
            break;
        }
        case 2:{
            output(a,n);
            break;
        }
        case 3:{
            cout << "Mang co " << cntSCP(a,n) << " so chinh phuong!" << endl;
            break;
        }
        case 4:{
            for(int i=0;i<n;i++){
                if(isSHT(a[i])){
                    cout << "Mang co chua so hoan thien!" << endl;
                    break;
                } else {
                    cout << "Mang khong chua so hoan thien! " << endl;
                    break;
                }
            }
            break;
        }
        case 5:{
            for(int i=0;i<n;i++){
                if(isNeg(a[i])){
                    cout << "Mang co chua so am!" << endl;
                    break;
                } else {
                    cout << "Mang khong chua so am!" << endl;
                    break;
                }
            }
            break;
        }
        case 6:{
            for(int i=0;i<n;i++){
                if(isPos(a[i])){
                    cout << "Mang co chua so duong!" << endl;
                    break;
                } else {
                    cout << "Mang khong chua so duong!" << endl;
                    break;
                }
            }
            break;
        }
        case 7:{
            for(int i=0;i<n;i++){
                if(isPrime(a[i])){
                    cout << "Mang co chua so nguyen to!" << endl;
                    break;
                } else {
                    cout << "Mang khong chua so nguyen to!" << endl;
                    break;
                }
            }
            break;
        }
        case 8:{
            cout << "Vi tri cua so chinh phuong dau tien la: " << f_SCP_addr(a,n) <<endl;
            break;
        }
        case 9:{
            cout <<"Dia chi so hoan thien cuoi cung la: " << l_SHT_addr(a,n) << endl;
            break;
        }
        case 10:{
            cout <<"Dia chi so nho nhat xuat hien dau tien: " << f_min(a,n) << endl;
            break;
        }
        case 11:{
            cout <<"Dia chi so nho nhat xuat hien cuoi cung: " << l_min(a,n) << endl;
            break;
        }
        case 12:{
            cout << "Nhap vi tri phan thu can xoa : " ;
            int pos;
            cin >> pos;
            delArr(a,n,pos);
            break;
        }
        case 13:{
            sort_tangDan(a,0,n);
            break;
        }
        case 14:{
            sort_giamDan(a,0,n);
            break;
        }
        case 15:{
            half_sort(a,n);
            break;
        }
        case 16:{
            int n1,n2;
            int *a1 = NULL;
            int *a2 = NULL;
            cout << "Nhap mang thu nhat!" <<endl;
            input(a1,n1);
            cout << endl;
            cout << "Nhap mang thu hai!" <<endl;
            input(a2,n2);
            int *tong = gopmang(a1,n1,a2,n2);
            cout << "Mang sau khi gop la: " ;
            output(tong,n1+n2);
        }
        case 17:{
            int m1,m2;
            int *b1 = NULL;
            int *b2 = NULL;
            cout << "Nhap mang thu nhat!" <<endl;
            input(b1,m1);
            cout << endl;
            cout << "Nhap mang thu hai!" <<endl;
            input(b2,m2);
            int *tong = sort_2_mang(b1,m1,b2,m2);
            cout << "Mang sau khi gop la: " ;
            output(tong,m1+m2);
        }
        default:
            break;
        }  
        system("pause");
    } while(choice !=0);


}