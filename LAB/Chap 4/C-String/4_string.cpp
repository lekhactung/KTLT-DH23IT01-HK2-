#include <bits/stdc++.h>
using namespace std;

bool palindrome (string s){
    int left = 0;
    int right = s.length()-1;
    while(left < right){
        if(s[left]!=s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main(){
    string s;
    getline(cin,s);
    if(palindrome(s)){
        cout << s << " la chuoi palindrome";
    } else {
        cout << "no ";
    }
    return 0;
}