#include <bits/stdc++.h>
using namespace std;

void soSanh (string a, string b){
    int length1  = a.length();
    int length2 = b.length();
    if(length1>length2) {
        cout << a << "dai hon "<<b ;
    } else{
        cout << b << "dai hon "<< a;
    }
}

void upper1stChar (string a,string b){
    bool is1stchar = true;
    for(char &kytu :a){
        if(is1stchar && !isspace(kytu)){
            kytu=toupper(kytu);
            is1stchar = false;
        }
        else if(isspace(kytu)){
            is1stchar=true;
        }
    }
    is1stchar=true;
    for(char &kytu :b){
        if(is1stchar && !isspace(kytu)){
            kytu=toupper(kytu);
            is1stchar = false;
        }
        else if(isspace(kytu)){
            is1stchar=true;
        }
    }
    cout << a << " " << b;
}
string attach (string a,string b){
    a+=b;
    return a;
}

int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
     upper1stChar(a,b);
    return 0 ;
}