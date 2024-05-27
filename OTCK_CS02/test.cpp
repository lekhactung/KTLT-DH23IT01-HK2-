#include <bits/stdc++.h>
using namespace std;

void swap (int &a,int &b){
    int tmp = a;
    a =b;
    b =tmp;
}

int main() {
    int n=10;
    int a[n] ;
    for(int i=0;i<n;i++){
        a[i] = rand()%9+1;
    }

    for(int i=0;i<n;i++)
        cout << a[i] << " ";

    cout << endl;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i]<a[j]){
                swap(a[i],a[j]);
            }
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    
    int pos;cin >>pos;
    for(int i=pos;i<n;i++)
        a[i]= a[i+1];
    n--;
    
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    
    
    return 0;
}