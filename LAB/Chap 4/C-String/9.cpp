#include <bits/stdc++.h>
using namespace std;
const int MAX_LENGTH= 100;

char *layho(char hoten[]){
    return strtok(hoten," ");
}

char *lay_ten_dem (char hoten[]){
    char *ho = strtok(hoten," ");
    return strtok(NULL," ");
}

char *lay_ten (char hoten[]){
    char *ho = strtok(hoten," ");
    char *tendem = strtok(NULL," ");
    return strtok(NULL," ");
}

int main(){
    char hoten[MAX_LENGTH];
    cin.get(hoten,MAX_LENGTH);
    cout << lay_ten(hoten);

    return 0;
}