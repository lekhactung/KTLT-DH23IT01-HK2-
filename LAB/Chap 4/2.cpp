#include <bits/stdc++.h>
using namespace std;

void re_string(string s){
    for(int i=s.length();i>=0;i--){
        cout << s[i];
        }
}

int main(){
    string s;
    getline(cin,s);
    re_string(s);
    return 0;
}