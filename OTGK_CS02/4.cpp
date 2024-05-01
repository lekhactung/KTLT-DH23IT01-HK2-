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

int main(){
    int r,c;
    r_c_input(r,c);
    int **a;
    a = new int* [r];
    for(int i=0;i<r;i++){
        a[i] = new int [c];
    }
    input(a,r,c);
    cout << "///////// \n";
    ouput(a,r,c);
    cout <<"Tong cua ma tran la: " << sum(a,r,c) <<endl;
    cout << "Vi tri so le dau tien la: " << odd(a,r,c) << endl;
    cout << "Cac so nguyen to co trong mang la: " ; prime(a,r,c); cout << endl;
    
    return 0;
}