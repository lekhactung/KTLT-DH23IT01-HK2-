#include <bits/stdc++.h>
using namespace std;

void swap (int &a,int &b){
    int tmp = a;
    a =b;
    b =tmp;
}

int main() {
    int a[10] ;
    for(int i=0;i<10;i++){
        a[i] = rand()%9+1;
    }

    for(int i=0;i<10;i++)
        cout << a[i];
    cout << endl;
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            if(a[i]<a[j]){
                swap(a[i],a[j]);
            }
    for(int i=0;i<10;i++)
        cout << a[i];
        
    
    return 0;
}