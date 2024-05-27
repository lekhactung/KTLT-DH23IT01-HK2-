#include <iostream>
#include <fstream>
using namespace std;

void input_r_c (int &r,int &c){
    cout <<"Nhap so luong dong: " ;
    cin >> r;
    cout << "Nhap so luong cot: ";
    cin >> c;
}

void input(int **a,int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            a[i][j] = rand()%9+1;
        }
    }
}
void output(int **a,int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void ghifile(int **a,int r,int c){
    ofstream ofs;
    ofs.open("bai3.txt", ios::out);
    if(ofs.is_open()){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                ofs << a[i][j] << " ";
            }
            ofs << endl;
        }
    } else{
        cout << "Khong mo duoc file!" << endl;
    }
    ofs.close();
}

void docfile(int **a,int r,int c){
    ifstream ifs;
    ifs.open("bai3.txt",ios::in);
    string matrix;
    if(ifs.is_open()){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                ifs >> a[i][j];
            }
        }

    } else {
        cout << "Khong mo duoc file";
    }
    ifs.close();
}

void tinhtong (int **a,int r,int c,ofstream &ofs){
    ofs.open("bai3.txt",ios::app);
    if(ofs.is_open()){
        int sum=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                sum+=a[i][j];
            }
        }
        ofs << endl << "Tong cua ma tran la : "<< sum  << endl;
    }else {
        cout << "Khong mo duoc file";
    }
    ofs.close();
}

int max(int **a,int r,int c){
    
}
int main(){
    srand(time(NULL));
    int r,c;
    int **a ;
    input_r_c(r,c);
    a = new int *[r];
    for(int i=0;i<r;i++){
        a[i] = new int [c];
    }
    ofstream ofs;
    input(a,r,c);
    docfile(a,r,c);
    ghifile(a,r,c);
    tinhtong(a,r,c,ofs);
    // output(a,r,c);
    for(int i=0;i<r;i++){
        delete[] a[i];
    }
    delete []a;
    return 0;
}