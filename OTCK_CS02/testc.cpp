#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void docfile(int *&a,int &n){
    ifstream ifs;
    ifs.open("testc.txt",ios::in);
    string line;
    n=0;
    if(ifs.is_open()){
        while(getline(ifs,line)){
            n++;
        }
        // cout << n;
        ifs.clear();
        ifs.seekg(0);
        a = new int [n];
        for(int i=0;i<n;i++){
            ifs >> a[i];
        }
        // for(int i=0;i<n;i++){
        //     cout << a[i];
        // }
    } else {
        cout <<"Khong mo duoc file!";
    }
    ifs.close();
}

void in(int *a,int n){
    for(int i=0;i<n;i++){
        cout  << a[i] << " ";
    }
}
int main(){
    int *a,n;
    docfile(a,n);
    // cout << n;
    in(a,n);
    return 0;
}