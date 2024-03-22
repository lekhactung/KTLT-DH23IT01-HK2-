#include <iostream>
using namespace std;

void input(int *arr,int n){
    for (int i =0;i<n;i++){
        cin >> *(arr+i);
    }
}

void output(int *arr,int n){
    for (int i =0;i<n;i++){
        cout <<  *(arr+i) << " ";
    }
}

int kiemTra(int *arr,int n,int x){
    for (int i = 0 ; i < n ; i++){
        if(x==arr[i]){
            return i+1; 
        } 
    }
    return 0;
}

int main(){
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    int *arr = new int [n];
    input(arr,n);
    cout << "Nhap gia tri can tim: ";
    int x; cin >> x;
    if(kiemTra(arr,n,x)!=0){
        cout << "Gia tri can tim nam tai vi tri:  " << kiemTra(arr,n,x);
    } else {
        cout << "Khong co gia tri can tim";
    }
    delete[] arr;
    arr = nullptr;
    return 0;
}