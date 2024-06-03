#include <bits/stdc++.h>
using namespace std;

void input (int a[],int n){
   for(int i=0;i<n;i++){
      cin >> a[i];
   }
}

// void input (int a[],int n){
//    for(int i=0;i<n;i++){
//       a[i] = rand( )%10+1;
//    }
// }

void output (int a[],int n){
   for(int i=0;i<n;i++){
      cout << a[i] <<" ";
   }
   cout << endl;
}

int maxvalue (int a[],int n){
   int max = a[0];
   for(int i=0;i<n;i++){
      if(a[i] > max){
         max = a[i];
      }
   }
   return max;
}

void minaddress(int a[],int n){
   int min = a[0];
   for(int i=0;i<n;i++){
      if(a[i]<=min){
         min = a[i];
      }
   } 
   for(int i=0;i<n;i++){
      if(a[i]==min){
         cout << "Gia tri nho nhat nam o vi tri thu " << i+1;
      }
   }
   
}

void soleovitrichan(int a[],int n){
   float tmp=0;
   float cnt=0;
   for(int i=0;i<n;i++){
      if(i%2==0 && a[i] %2!=0){
         tmp+=a[i];
         cnt++;
      }
   }
   cout << "Trung binh cong cac so le o vi tri chan la : " << (float)tmp/cnt << endl;
}

bool isscp(int n){
    for(int i=0;i<n;i++){
        int squareRoot = sqrt(n);
        if(squareRoot * squareRoot == n){
            return true;
        }
    }
    return false;
}

int demsochinhphuong(int a[],int n){
   int cnt=0;
   for(int i=0;i<n;i++){
      if(isscp(a[i])){
         cnt++;
      }
   }
   return cnt;
}

bool issnt(int n){
  if(n<2){
        return false;
    } 
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int demsonguyento(int a[],int n){
   int cnt=0;
   for(int i=0;i<n;i++){
      if(issnt(a[i])){
         cnt++;
      }
   }
   return cnt;
}

void thaythegiatriam(int a[],int n){
   for(int i=0;i<n;i++){
      if(a[i]<0){
         a[i]==0;
      }
   }
}

// int* xoaphantuam(int a[],int n){
//    int cnt =0;
//    for(int i=0;i<n;i++){
//       if(a[i]>=0){
//        cnt++;  
//       }
//    }
//    int *tmp = new int[cnt];
//    int index=0;
//    for(int i=0;i<n;i++){
//       if(a[i]<0){
//          tmp[index++]=a[i];
//       }
//    }
//    return tmp;
// }

void sort(int a[],int n){
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
         if(a[i]<a[j]){
            int tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
         }
      }
   }
}

int main(){
   int n =10;
   int a[n];
   input(a,n);
   output(a,n);
   // minaddress(a,n);
   // soleovitrichan(a,n);
   sort(a,n);
   output(a,n);
   
   return 0;
}