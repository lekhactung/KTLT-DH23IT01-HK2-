#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 10;

void r_c_input(int &r,int &c){
    do {
        cout << "Nhap dong: "; cin >> r;
        cout << "Nhap cot: "; cin >> c;
        if (r <= 0 || r > MAX_SIZE || c <= 0 || c > MAX_SIZE)
            cout << "Vui long nhap lai!\n";
    } while (r <= 0 || r > MAX_SIZE || c <= 0 || c > MAX_SIZE);
}

void input(int **a,int &r ,int &c){
    cout << "Nhap phan tu cho " << r <<" hang va "<< c << " cot :";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> a[i][j];
        }
    }
}

void ouput(int **a,int &r ,int &c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void output_1d ( int *a,int n){
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int sum(int **a, int r, int c){
    int tmp =0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            tmp += **(a+i)+j;
        }
    }
    return tmp;
}

bool isPrime (int n){
    if(n <2 ){
        return false;
    } 
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            return false;
        }
    } 
    return true;
}

void prime(int **a,int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(isPrime(**(a+i)+j)){
                cout << **(a+i)+j << " ";
            }
        }
    }
}

bool isOdd(int n){
    if(n%2==0){
        return false;
    }
    return true;
}

int *odd(int **a , int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(isOdd(a[i][j])){
                return &a[i][j];
            }
        }
    }
    return NULL;
}

void col_index (int **a, int r, int c){
    int n;
    cout << "Nhap vi tri cot can in phan tu: ";
    cin >> n;
    for(int i=0;i<r;i++){
        cout << a[i][n-1] << " ";
    }
    cout << endl;
}

void row_index (int **a, int r, int c){
    int n;
    cout << "Nhap vi tri hang can in phan tu: ";
    cin >> n;
    for(int i=0;i<r;i++){
        cout << a[n-1][i]<< " "; 
    }
    cout << endl;
}

int* col_even(int **a, int r, int &c){
    int n;
    cout << "Nhap vi tri cot can in phan tu chan: ";
    cin >> n;
    int cnt= 0;
    for (int i = 0; i < r; i++){
        if (!isOdd(a[i][n-1])){
            cnt++;
        }
    }
    if (cnt==0) return nullptr;
    int* d = new int [cnt];
    int tmp =0;
    for(int i=0;i<cnt;i++){
        if(!isOdd(a[i][n-1])){
            d[tmp++] = a[i][n-1];
        }
    }
    return d;
}

void n_input(){
    int n; cout << "Nhap vi tri : "; cin >> n;
}


int main(){
    int r,c,n;
    r_c_input(r,c);
    int **a;
    a = new int* [r];
    for(int i=0;i<r;i++){
        a[i] = new int [c];
    }
    input(a,r,c);
    cout << "///////// \n";
    ouput(a,r,c);
    // cout <<"Tong cua ma tran la: " << sum(a,r,c) <<endl;
    // cout << "Cac so nguyen to co trong mang la: " ; prime(a,r,c); cout << endl;
    // cout << "Vi tri so le dau tien la: " << odd(a,r,c) << endl;
    // col_index(a,r,c);
    // row_index(a,r,c);
    int *e = col_even(a,r,c);
    output_1d(e,c);


    return 0;
}