#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int giaithua (int n){
    if (n==1){
        return 1;
    } 
    return n*giaithua(n-1);
}

int fibonacci (int n){
    if(n==1 || n==0){
        return n;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int s1 (int n ){
    if(n==0){
        return 0;
    } 
    return n + s1(n-1); 
}

int s2(int n){
    if(n==1){
        return 1;
    }
    return pow(n,2)+ s2(n-1);
}

bool isodd(int n){
    return n%2!=0;
}

float s3(float n){
    if(n==0){
        return 0;
    } if(isodd(n)){
        return 1/n + s3(n-1);
    } else{
        return s3(n-1);
    }
}

int s4(int n){
    if(n==1){
        return 1;
    }
    return giaithua(n) + s4(n-1);
}

int pow(int x,int n){
    if(n==0){
        return 1;
    } else {
        return x *pow(x,n-1);
    }
}

int cnt(int n){
    if(n<10){
        return 1;
    } 
    return 1 + cnt(n/10);
}
int tongchan(int n){
    if(n<10){
        if(n%2==0){
            return n;
        } else {
            return 0;
        }
    }else {
        if(n%2==0){
            return n%10+tongchan(n/10);
        } 
        else {
            return tongchan(n/10);
        }
    }
}

int tongle(int n){
    if(n<10){
        if(n%2!=0){
            return 1;
        } else {
            return 0;
        }
    } else {
        if(n%2!=0){
            return n%10 + tongle(n/10);
        } else{
            return tongle(n/10);
        }
    }
}

int dectobin (int n){
    long b;
    if(n<2) {
        return n;
    } else{
        b = n%2;
        return dectobin(n/2) *10+b;
    }
}

int bintodec(int n,int i=0){
    if(n==0){
        return 0;
    }  else{
        int tmp = n%10;
        return tmp * pow(2,i) +bintodec(n/10 ,i+1);
    }
}

int ucln(int a,int b){
    if(b==0){
        return a;
    } else { 
        int r = a % b;
        a = b;
        b = r;
        return ucln(a,b);
    }
}

int sumarr(int a[],int n){
    if(n==0){
        return 0;
    } else  {
        return  a[n-1] + sumarr(a,n-1);
    }
}

int minarr(int a[],int n){
    if(n==0){
        return 0;
    } if(n==1){
        return a[n-1]; 
    }else{
        if(a[n-1]<minarr(a,n-1)){
            return a[n-1];
        } else{
            return minarr(a,n-1);
        }
    }
}

int pascal(int row,int col){
    if(col == 0 || col == row){
        return 1;
    } else {
        return pascal(row-1,col-1)+pascal(row-1,col);
    }
}

void printpascal(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << pascal(i,j) << " ";
        }
        cout << endl;
    }
}

int main(){
    // cout << fixed << setprecision(3) << s3 (5);
    // cout << s4(3);
    // cout << dectobin(10);
    // cout << bintodec(1010);
    // cout << ucln(12,56);
    int a[10];
    for(int i=0;i<10;i++){
        a[i]= rand()%10+1;
    }
    for(int i=0;i<10;i++){
        cout << a[i] << " ";
    } 
    cout << endl;
    // cout << sumarr(a,10);
    // cout <<minarr(a,10);
    printpascal(5);
}