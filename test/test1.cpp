#include <bits/stdc++.h>
using namespace std;

int dectobin(int n){
    if (n<2){
        return n;
    } else {
        int tmp = n%2;
        return dectobin(n/2) *10 + tmp;
    }
}

int bintodec(int n,int i=0){
    if(n==0){
        return 0;
    } else{
        int tmp = n%10;
        return tmp * pow(2,i)+bintodec(n/10,i+1);
    }
}

void swap(int &a,int &b){
    int tmp = a;
    a=b;
    b=tmp;
}

void sort(int a[],int n){
    if(n==1){
        return;
    } else{
        sort(a,n-1);
        if(a[n-2]>a[n-1]){
            swap(a[n-2],a[n-1]);
            return sort(a,n-1);
        }
    }
}
int main(){
    // cout << dectobin(10);
    // cout << bintodec(1010);
    int a[10];
    for(int i=0;i<10;i++){
        a[i]=rand()%10 +1;
    }
    
     for(int i=0;i<10;i++){
        cout << a[i]<< " ";
    }
    cout << endl;
    sort(a,10);
     for(int i=0;i<10;i++){
        cout << a[i]<< " ";
    }

    return 0;
}