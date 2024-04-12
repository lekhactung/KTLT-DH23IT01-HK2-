#include <bits/stdc++.h>
using namespace std;

const int MAX_LENGTH =100;


int main(){
    char hoten[MAX_LENGTH];
    cin.get(hoten,MAX_LENGTH);
    
    char *ho = strtok(hoten," ");
    char *tendem = strtok(NULL," ");
    char *ten = strtok (NULL," ");
    cout << ho << endl << tendem << endl << ten <<endl;

    return 0;
}