#include <iostream>
#include <cmath>
#include <string>
using namespace std;

long soDaoNguoc ( long n)
{
    long sodao=0;
    while (n!=0){
        long tmp = n % 10;
        sodao = sodao*10+tmp;
        n/=10;
    }
    return sodao;
          
}

string daonguoc(string n){
    for(int i=n.size();i>=0;i--){
        cout << n[i];
    }
}

int main(){

int n = 12345;
cout << soDaoNguoc(n);

return 0;
}