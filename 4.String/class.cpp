#include <bits/stdc++.h>

using namespace std;

void UpperCase (string s){
    for(int i=0;i<s.length();i++){
        if(s[i] > 'a' && s[i]<'x'){
            s[i]-=32;
        }
    }
    for(int i=0;i<s.length();i++){
        cout << s[i];
    }
}

float frequency (string s){
    char x;
    cout << "Nhap ki tu can kiem tra tan suat : ";
    cin >> x;
    int tmp=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==x){
            tmp++;
        }
    }
    int n = s.length();
    return tmp/n*100;
}

void connect (string s1,string s2){
    // int n1 = s1.length(), n2 =s2.length();
    // int j =0;
    // for(int i=n1;i<n1+n2;i++){
    //     s1[i]=s2[j];
    //     j++;
    // }
    // for(int i=0;i<n1+n2;i++){
    //     cout << s1[i];
    // }
    
    s1 +=s2;
    cout << s1;

}

void delete_notchar(char *arr){
    for(int i=0;i<50;i++){
        if(isalpha(arr[i])){
            cout << arr[i];
        }
    }
}



int main(){
    // string s;
    // getline(cin,s);
    // cout << frequency(s);

    // string s1,s2;
    // getline(cin,s1);
    // getline(cin,s2);
    // connect(s1,s2);

    char s[50];
    cin.get(s,50);
    char * p= strtok(s," ");
    while(p!=NULL){
        cout << p << endl;
        p = strtok(NULL," ");
        
    }
    cout << s[0];

    //s.split + s.erase + s.append/s.insert

    return 0;
}