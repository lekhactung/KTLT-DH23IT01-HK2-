#include <iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    } else {
        return n+sum(n-1);
    }
}

int fibo(int n){
    if(n==0 || n==1){
        return n;
    } else {
        return fibo(n-1)+fibo(n-2);
    }
}

int giaithua(int n){
    if(n==0){
        return 1;
    } else{ 
        return n*giaithua(n-1);
    }
}

int tohop(int n,int k){
    if(n==k || k==0){
        return 1;
    } else{
        return tohop(n-1,k-1)+tohop(n-1,k);
    }
}

int dectobin(int n){
    long b;
    if(n<2){
        return n;
    } else {
        b=n%2;
        return dectobin(n/2)*10+b;

    }
}

void dectohex(int n){
    if(n<16){
        if(n<10){
            cout << n;
        } else {
            cout << (char)(n+55);
        }
    } else {
        dectohex(n/16);
        long b;
        b=n%16;
        if(b<10){
            cout << b;
        } else {
            cout << char(b+55);
        }
    }
}

int demso  (int n){
    if(n<10){
        return 1;
    } else {
        return 1 + demso(n/10);
    }
}

int tongCuaN(int n){
    if(n<10){
        return n;
    } else {
        return tongCuaN(n/10)+n%10;
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

int max(int n){
    if(n<10){
        return n;
    } else {
        int tmp = max(n/10);
        if(n%10>tmp){
            return n%10;
        } else{
            return tmp;
        }
    }
}

int min(int n){
    if(n<10){
        return n;
    } else {
        int tmp = min(n/10);
        if(n%10<tmp){
            return n%10;
        } else{
            return tmp;
        }
    }
}

int sumSQR (int n){
    if(n==1){
        return 1;
    } else {
        return n*n+sumSQR(n-1);
    }
}

int minArr(int arr[],int n){
    if(n==0){
        return 0;
    } else if(n==1){
        return arr[0];
    } else {   
        if(arr[n-1]<minArr(arr,n-1)){
            return arr[n-1];
        } else {
            return minArr(arr,n-1);
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << minArr(arr,n);

    return 0;
}