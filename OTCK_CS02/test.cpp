#include <iostream>
#include <string>
#include <string.h>
#include<fstream>
#include <time.h>
using namespace std;

void input_arr (int *a,int n){
    for(int i=0;i<n;i++){
        a[i]= rand()%9+1;
    }
}
void output_arr (int *a,int n){
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}
void nhapfile(int *a,int n){
    ofstream ofs;
    ofs.open("test.txt",ios::out);
    if(ofs.is_open()){
        for(int i=0;i<n;i++){
            ofs << a[i] << endl;
        }
    } else {
        cout <<"Khong mo duoc file!";
    }
    ofs.close();
}

void docfile(int *&a,int &n){
    ifstream ifs;
    ifs.open("test.txt",ios::in);
    if(ifs.is_open()){
        int tmp;
        while(ifs >> tmp){
            n++;
        }
        ifs.clear();
        ifs.seekg(0);
        a = new int[n];
        for(int i=0;i<n;i++){
            ifs >> a[i];
        }
    } else {
        cout <<"Khong mo duoc file!" ;
    }
    ifs.close();
}

int main(){
    srand(time(NULL));
    int *a, n;
    // cout <<"Nhap so luong phan tu : "; cin >> n;
    // a = new int[n];
    // input_arr(a,n);
    // nhapfile(a,n);
    docfile(a,n);
    output_arr(a,n);
    return 0;
}