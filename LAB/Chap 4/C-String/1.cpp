#include <bits/stdc++.h>
using namespace std;

void sosanh(char s[],char a[]){
    if (strlen(s) > strlen(a)){
        cout << s << " dai hon " << a;
    } else if(strlen(s)<strlen(a)){
        cout << a << " dai hon "<< s;
    }else {
        cout << s << " = " << a;
    }
}

void upper1stchar(char s[],char a []){
    bool is1stchar = true;
    for(int i=0;i<strlen(s);i++){
        if(is1stchar && !isspace(s[i])){
            s[i]=toupper(s[i]);
            is1stchar=false;
        } else if(isspace(s[i])){
            is1stchar=true;
        }
    }
    is1stchar = true;
    for(int i=0;i<strlen(a);i++){
        if(is1stchar && !isspace(a[i])){
            a[i]=toupper(a[i]);
            is1stchar=false;
        } else if(isspace(a[i])){
            is1stchar=true;
        }
    }
    for(int i=0;i<strlen(s);i++){
        cout << s[i];
    }
    cout << endl;
    for(int i=0;i<strlen(a);i++){
        cout << a[i];
    }
}

void attach(char s[],char a[]){
    int s_length = strlen(s);
    int a_length = strlen(a);
    s[s_length] = ' ';
    for(int i=0;i<strlen(a);i++){
        s[s_length+1]=a[i];
        s_length++;
    }
    // s[s_length] = '\0';
    cout <<s;
    
}

const int MAX_LENGTH =100;
int main(){
    char s[MAX_LENGTH];
    cin.getline(s,MAX_LENGTH);
    char a[MAX_LENGTH];
    cin.getline(a,MAX_LENGTH);
    attach(s,a);
    return 0;
}