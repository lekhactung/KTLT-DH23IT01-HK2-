#include <bits/stdc++.h>
using namespace std;

bool isprime (int n){
    if (n<2 ){
        return false;
    } else {
        for(int i=0;i<n/2 ;i++){
            if(n % i ==0 ){
                return false;
            }
        }
    }
    return true;
}

bool iseven(int n){
    return (n%2==0) ;
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
    return !isNeg(n);
}
