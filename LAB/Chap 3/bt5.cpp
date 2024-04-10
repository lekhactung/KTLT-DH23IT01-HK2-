#include <iostream>
using namespace std;

int fibo(int n){
    if(n==1 || n==0){
        return n;
    } else {
        return fibo(n-1) + fibo(n-2);
    }

}

int main(){
    int *n = new int ;
    do{
        cin >> *n;
        if(*n<2){
            cout << "nhap lai!" << endl;
        }
    }while ( *n < 2);

    for(int i=0;i<=*n;i++){
        cout << fibo(i) << " ";
    }
    delete n;
    n = nullptr;
    return 0;
}