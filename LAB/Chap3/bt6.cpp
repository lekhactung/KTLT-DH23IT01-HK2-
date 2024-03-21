#include <iostream>
using namespace std;

void input (int *arr,int n){
    for (int i =0 ;i<n;i++){
        cin >> *(arr+i);
    }
}

void output (int *arr,int n){
    for (int i =0;i<n;i++){
        cout << *(arr+i) << " ";
    }
}

void reverse (int *arr, int n){
    int start = 0;
    int end = n-1;
    for (int i = n-1; i>=0;i--){
        int tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp;
    }
}

int main(){
    int n;
    cin >> n;
    int *arr = new int [n];
    input(arr,n);
    reverse(arr,n);
    output(arr,n);

    return 0;
}