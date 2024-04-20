#include <bits/stdc++.h>
using namespace std;

const int MAX_LENGTH = 100;

void intput (int arr[],int n){
    for(int i =0 ;i<n;i++){
        cin >> arr[i];
    }
}

void output (int arr[],int n){
    for(int i =0 ;i<n;i++){
        cout <<  arr[i] << " ";
    }
    cout << endl;
}

int soChinhPhuong (int arr[],int n){
    int cnt =0 ;
    for(int i=0;i<n;i++){
        int squareRoot = sqrt(arr[i]);
        if(squareRoot * squareRoot == arr[i]){
            cnt++;
        }
    }
    return cnt;
}

bool checkSoHoanThien(int n){
    int sum =1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            sum+=i; 
        }
    } 
    if(sum == n ){
        return n; 
    } else return false;
}

bool checkSHT(int arr[],int n){
    for(int i=0;i<n;i++){
        if(checkSoHoanThien(arr[i])){
            return true;
        } 
    }
    return false;
}

void ifSHT(int arr[],int n){
    if(checkSHT(arr,n)){
        cout << "Mang co chua SHT";
    } else cout << "Mang khong chua SHT";
}

bool negative(int arr[],int n){
    for(int i =0;i<n;i++){
        if(arr[i] < 0){
            return true;
        }
    }
    return false;
}

void ifNegative(int arr[],int n){
    if(negative(arr,n)){
        cout << "Mang co chua so am";
    } else cout <<"Mang khong chua so am";
}

bool positive(int arr[],int n){
    for(int i =0;i<n;i++){
        if(arr[i] >= 0){
            return true;
        }
    }
    return false;
}

void ifPositive(int arr[],int n){
    if(positive(arr,n)){
        cout << "Mang co chua so duong";
    } else cout <<"Mang khong chua so duong";
}

bool checkSNT(int n){
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

bool SNT(int arr[],int n){
    for(int i=0;i<n;i++){
        if(checkSNT(arr[i])){
            return true;
        }
    }
    return false;
}

void ifSNT(int arr[],int n){
    if(SNT(arr,n)){
        cout << "Mang co chua SNT";
    } else cout <<"Mang khong chua SNT";
}

int main(){
    int arr[MAX_LENGTH];
    int n;
    cout << "So phan tu cua mang : ";
    cin >> n;
    intput(arr,n);
    
    return 0;
}