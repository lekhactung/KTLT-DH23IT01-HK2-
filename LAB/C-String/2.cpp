#include <bits/stdc++.h>
using namespace std;

void tach_chuoi(char a[]){
    char tmp[]=",";
    char *ptok = strtok(a,tmp);
    while (ptok != NULL){
        cout << ptok << " ";
        ptok = strtok(NULL,tmp);
    }

}

const int MAX_LENGTH =100;
int main(){
    char a[MAX_LENGTH];
    cin.get(a,MAX_LENGTH);
    tach_chuoi(a);
    return 0;

}