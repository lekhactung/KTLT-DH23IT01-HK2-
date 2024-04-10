#include <bits/stdc++.h>
using namespace std;

bool palindrome(char a[]){
    int do_dai = strlen(a);
    for(int i = 0; i < do_dai/2 ; i++){
        if(a[i] != a[do_dai-i-1]){
            return false;
        }
    }
    return true;
}

const int MAX_LENGTH = 100;
int main(){
    char a[MAX_LENGTH];
    cin.get(a,MAX_LENGTH);
    if(palindrome(a)){
        cout << "yes";
    } else {
        cout << "no";
    }
    return 0;
}