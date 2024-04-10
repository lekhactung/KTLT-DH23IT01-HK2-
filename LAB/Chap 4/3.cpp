#include <bits/stdc++.h>
using namespace std;

string xoa_khoang_trang(string s){
    int firstSpace = s.find_first_not_of(" ");
    int lastSpace = s.find_last_not_of(" ");
    return s.substr(firstSpace,lastSpace-firstSpace+1);
}

int dem_khoang_trang (string s){
    int cnt =0;
    for(char x : s){
        if(x == ' '){
            cnt++;
        }
    }
    return cnt;
}

void dem_ky_tu(string s){
    int num = 0;
    int ch =0;
    for(char x : s){
        if(x>='0' && x<='9'){
            num++;
        } else if(x>='a'&& x<='z' || x>='A' && x<='Z'){
            ch++;
        }
    }
    cout << "chu so: " << num << endl << "chu cai: " << ch << endl;
}

void dem_chu_thuong(string s){
    int cnt = 0;
    for(char x : s){
        if(x>='a'&& x<='z'){
            cnt++;
        }
    }
    cout << "chu int thuong: " <<cnt << endl;
}

string  uppercase(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]-=32;
        }
    }
    return s;
}

string  lowercase(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
        }
    }
    return s;
}

int count ( string s){ 
    stringstream ss(s);
    string tmp;
    int cnt=0;
    while(ss>>tmp){
        cnt++;
    }
    return cnt;
}
int main(){
    string s;
    getline(cin,s);
    cout << count(s);
    return 0 ;
}