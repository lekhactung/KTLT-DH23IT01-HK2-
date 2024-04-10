#include <iostream>
using namespace std;


int main(){
    int *a = new int;
    int *b = new int;
    cin >> *a >> *b;
    while (*b!=0){
        int tmp = *a % *b;
        *a = *b;
        *b = tmp;
    } 
    int ucln = *a;
    cout << ucln;
    return 0;
}