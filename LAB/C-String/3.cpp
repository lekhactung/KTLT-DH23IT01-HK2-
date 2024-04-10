#include <bits/stdc++.h>
using namespace std;

void xoa_khoang_trang(char a[]){
    int tmp1,tmp2;
    for(int i=0;i<strlen(a);i++){
        if(isalpha(a[i])){
            tmp1 = i;
            break;
        }
    }
    for(int i=strlen(a);i>=0;i--){
        if(isalpha(a[i])){
            tmp2 = i;
            break;
        }
    }
    for(int i=tmp1;i<=tmp2;i++){
        cout << a[i];
    }
}

int dem_khoang_trang(char a[]){
    int cnt=0;
    for(int i=0;i<strlen(a);i++){
        if(a[i]==' '){
            cnt++;
        }
    }
    return cnt;
}

void dem_ky_tu(char a[]){
    int num=0,ch=0;
    for(int i=0;i<strlen(a);i++){
        if(a[i]>='a' && a[i] <= 'z' || a[i] >='A' && a[i] <= 'Z'){
            ch++;
        } else if(a[i]>='0' && a[i]<='9'){
            num++;
        }
    }
    cout << "chu: " << ch << endl;
    cout << "so: " << num << endl;
}

int ky_tu_thuong(char a[]){
    int cnt=0;
    for(int i=0;i<strlen(a);i++){
        if(a[i]>='a' && a[i] <= 'z'){
            cnt++;
        }
    }
    return cnt;
}

int ky_tu_hoa(char a[]){
    int cnt=0;
    for(int i=0;i<strlen(a);i++){
        if(a[i]>='A' && a[i] <= 'Z'){
            cnt++;
        }
    }
    return cnt;
}

void uppercase(char a[]){
    for(int i=0;i<strlen(a);i++){
        if(a[i]>='a' && a[i] <= 'z'){
            a[i]-=32;
        }
    }
    for(int i=0;i<strlen(a);i++){
        cout <<a[i];
    }
}

void lowercase(char a[]){
    for(int i=0;i<strlen(a);i++){
        if(a[i]>='A' && a[i] <= 'Z'){
            a[i]+=32;
        }
    }
    for(int i=0;i<strlen(a);i++){
        cout <<a[i];
    }
}

void upper1stchar(char a []){
    bool is1stchar = true;
    for(int i=0;i<strlen(a);i++){
        if(is1stchar && !isspace(a[i])){
            a[i]=toupper(a[i]);
            is1stchar=false;
        } else if(isspace(a[i])){
            is1stchar=true;
        }
    }
    for(int i=0;i<strlen(a);i++){
        cout << a[i];
    }
}

int count(char a[]){
    bool ischar=false;
    int cnt=0;
    for(int i=0;i<strlen(a);i++){
        if ( !isspace(a[i]) && !ischar){
            cnt++;
            ischar=true;
        } else if(isspace(a[i])){
            ischar=false;
        }
    }
    return cnt;
}

const int MAX_LENGTH =100;
int main(){
    char a[MAX_LENGTH];
    cin.get(a,MAX_LENGTH);
    upper1stchar(a);
    return 0;
}