#include <iostream>
using namespace std;

bool isOdd(int a){
    if(a%2==1){
        return true;
    } else {
        return false;
    }
}

int main(){
    int n;
    cin >> n;
    int *a = new int [n];
    for(int i=0;i<n;i++){
        cin >> *(a+i);
    }
    int max=a[0];
    for(int i=0;i<n;i++){
        if(isOdd(*(a+i)) && *(a+i) > max){
            max = *(a+i);
        }
    }
    cout << max;
    delete[] a;
    a = nullptr;
    return 0 ;
}