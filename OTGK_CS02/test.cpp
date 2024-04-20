#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 6;
    int sum =1;
    for(int i=2;i<n;i++){
        if(n % i == 0 ){
            sum += i;
        }
    }
    if(sum == n ){
        cout << n << " la so hoan hao";
    } else {
        cout << n << " ko phai so hoan hao";
    }

    return 0;
}