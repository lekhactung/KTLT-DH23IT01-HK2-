#include <iostream>
using namespace std;
int main(){
    int x,y;
    int *ptr = &x;
    *ptr = 80;
    cout << &x << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
    cout << x;
}