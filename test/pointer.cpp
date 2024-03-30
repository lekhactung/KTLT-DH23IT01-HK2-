#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int a = 32 , *ptr = &a;
    char ch ='A', &cho = ch;
    cho += a;
    *ptr +=ch;
    cout << a << " " << ch;
}
