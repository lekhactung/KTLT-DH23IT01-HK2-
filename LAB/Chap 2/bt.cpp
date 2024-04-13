#include <iostream>
#include <iomanip>
#include <cmath>
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
int decimalToBinary(int n){
    long b;
    if(n<2){
        return n;
    } else {
        b = n%2;
        return decimalToBinary(n/2)*10+b;
    }
}
//BAI9
int binaryToDecimal(int n,int i=0){
    int dec;
    if(n==0){
        return 0;
    }  else {
        int temp = n%10;
        dec = temp  * pow(2,i) + binaryToDecimal(n/10,i+1);   
        return dec;
    }
}
//BAI10
int UCLN(int a,int b){
    if(b==0){
        return a;
    } else {
        int d = a%b;
        a=b;
        b=d;
        return UCLN(a,b);
    }
}
//BAI11 
int sumArr(int arr[],int n){
    if(n==0){
        return 0 ;
    } else {
        return  arr[n-1] + sumArr(arr,n-1);
    }
}
//BAI12
int minArr(int arr[],int n){
    if(n==0){
        return 0;
    } else if(n==1){
        return arr[0];
    } else {
        if(arr[n-1] < minArr(arr,n-1)){
            return arr[n-1];
        }
        else {
            return minArr(arr,n-1);
        }
    }
        
}
//BAI13
int pascalRec(int row , int col){
    if(col==0 || col == row){
        return 1;
    } else { 
        return pascalRec(row-1,col-1) + pascalRec(row-1,col); 
    }
}
void printPacal (int n){
    for(int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout << pascalRec(i,j) << " ";
        }
        cout << endl;
    }
}


int main(){
    int n;
    cin >> n;
    cout << fibo (n);


   return 0;
}