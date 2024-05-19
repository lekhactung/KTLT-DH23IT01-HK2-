#include <bits/stdc++.h>
using namespace std;
void inputArr (int a[],int &n){
    for(int i=0;i<n;i++){
        a[i] = rand()%100-50;
    }
}

void output (int a[],int &n){
    for(int i=0;i<n;i++){
        cout << a[i] <<" ";
    }
    cout << endl;
}

int giaithua(int n){
    if (n<1){
        return 1;
    } else {
        return n * giaithua(n-1);
    }
}

float tong (int n,int x){
    if(n==1 ){
        return 1;
    } if (x==0){
        return 0;
    } 
    return giaithua(n)/pow(x,n) + tong(n-1,x);

}

float tong2 (int n){
    if(n==1){
        return 1 ;
    } 
    return sqrt(n+tong2(n-1));
}

int fibonacci (int n){
    if(n==0 || n==1){
        return n;
    }  
    return fibonacci(n-1) + fibonacci(n-2);
}

int demle(int a[],int n,int cnt){
    if(n==0){
        return cnt;
    } else {
        if(a[n-1]%2==0){
            return demle(a,n-1,cnt);
        } else {
            return demle(a,n-1,cnt+1);
        }
    }
}

int demchan(int a[],int n,int cnt){
    if(n==0){
        return cnt;
    } else {
        if(a[n-1]%2==0){
            return demchan(a,n-1,cnt+1);
        } else {
            return demchan(a,n-1,cnt);
        }
    }
}

int demam(int a[],int n,int cnt){
    if(n==0){
        return cnt;
    } else {
        if(a[n-1]>0){
            return demam(a,n-1,cnt);
        } else {
            return demam(a,n-1,cnt+1);
        }
    }
}

int demduong(int a[],int n,int cnt){
    if(n==0){
        return cnt;
    } else {
        if(a[n-1]>0){
            return demduong(a,n-1,cnt+1);
        } else {
            return demduong(a,n-1,cnt);
        }
    }
}
void swap(int &n,int &m){
    int tmp = n;
    n = m; 
    m = tmp;
}

void sort_Tangdan(int a[], int n){
    if (n == 1) 
        return;
    sort_Tangdan(a,n-1);
    if (a[n-2] > a[n-1]){
        swap(a[n-2],a[n-1]);
        sort_Tangdan(a,n-1);
    }
}

int main(){
    srand(time(NULL));
    int a[100];
    int n,x;
    cout << "Nhap gia tri n va x de tinh S(n,x) = n!/x^n \n" ;
    cout << "n : "; 
    cin >> n ;
    cout << "x : "; 
    cin >> x ;
    cout << "S(n,x) = " << tong(n,x) << endl;
    

    cout << "Nhap gia tri n de tinh S(n) = sqrt(n->sqrt(1)) \n";
    cin >> n;
    cout << tong2(n) << endl;

    cout << "Nhap so hang cua day fibonacci can tim: " ; cin >>n;
    cout <<fibonacci(n) << endl; 

    cout << "Nhap so phan tu trong mang: "; cin >> n;
    inputArr(a,n);
    cout << "Cac phan tu trong mang la : \n" ;
    output(a,n);

    cout << "Tong so chan co trong mang la :  " <<demchan(a,n,0) << endl;
    cout << "Tong so le co trong mang la :  " <<demle(a,n,0) << endl;
    cout << "Tong so am co trong mang la :  " <<demam(a,n,0) << endl;
    cout << "Tong so duong co trong mang la :  " <<demduong(a,n,0) << endl;
    

    
    return 0;
}