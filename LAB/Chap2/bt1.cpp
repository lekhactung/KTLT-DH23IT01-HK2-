#include <iostream>
#include <iomanip>
using namespace std;
int s1 (int n){
    if(n==0){
        return 0;
    } else {
        return n+s1(n-1);
    }
}
int s2(int n){
    if(n==0){
        return 0;
    } else {
        return n*n + s2(n-1);
    }
}
// float s3(int n){
//     if(n==0){
//         return 0;
//     } else {
//         if(n%2==1){
//             return 1/n + s3(n-1);
//         } else {
//             return s3(n-1);
//         }
//     }
// }
int s4(int n){
    if(n==0){
        return 1;
    } else {
        return n*s4(n-1);
    }
}
//BAI3
int  fibo(int n){
    if (n==0 || n==1){
        return n;
    }else {
        return fibo(n-1)+fibo(n-2);
    }
}   
//BAI4
int sqrt(int n, int x){
    if(x<0){
        return 0;
    } else {
        if(n==0){
            return 1;
        } else{
            return x*sqrt(n-1,x);
        }
    }
}
//BAI5
int cnt(int n){
    if(n<10){
        return 1;
    } else {
        return 1+cnt(n/10);
    }
}
//BAI6
int reverse(int n,int rev){
   return 0;
}
//BAI7
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
        if(n%2==0){
            return 0;
        } else {
            return n;
        }
    }else {
        if(n%2==0){
            return tongle(n/10);
        } 
        else {
            return n%10+tongle(n/10);
        }
    }
}
//BAI8



int main(){
    int n =1234;
    int rev;
    cout <<tongle(n);
    return 0;
}