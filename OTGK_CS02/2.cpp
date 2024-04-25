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

void intput (int *&arr,int n){
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
    return !isNeg;
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

void sort_tangDan(int *arr, int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] >= arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

void sort_giamDan(int *arr, int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] <= arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}


int main(){
    int *arr = NULL;
    int n;
    cout << "So phan tu cua mang : ";
    cin >> n;
    intput(arr,n);
    int  pos;
    output(arr,n);
    sort_giamDan(arr,n);
    output(arr,n);
    return 0;
}