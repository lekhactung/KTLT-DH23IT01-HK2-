#include <iostream>
using namespace std;
int tong(int arr[],int n){
    if(n==0){
        return arr[n];
    } else {
        return arr[n]+tong(arr,n-1);
    }
}

int min(int arr[],int n){
    if(n==0){
        return 0; 
    } else if(n==1){
        return arr[0];
    } else {
        if(arr[n-1] < min(arr,n-1)){
            return arr[n-1];
        } else {
            return min(arr,n-1);
        }
    } 
}
int max(int arr[],int n){
    if(n==0){
        return 0; 
    } else if(n==1){
        return arr[0];
    }else {
        if(arr[n-1] > max(arr,n-1)){
            return arr[n-1];
        } else {
            return max(arr,n-1);
        }
    } 
}

int tongchan(int n){
    if(n<10){
        if(n%2==1){
            return 0;
        } else { 
            return n;
        }
    } else {
        if(n%2==1){
            return tongchan(n/10);
        } else {
            return tongchan(n/10)+n%10;
        }
    }
}
int main(){
    int n = 123456789;
    // int arr[n]={9,5,2,5,6};
    // cout << min(arr,n) << endl;
    // cout << max(arr,n) << endl;
    cout << tongchan(n);
    return 0;
}