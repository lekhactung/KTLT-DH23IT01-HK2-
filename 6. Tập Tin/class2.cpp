#include <fstream>
#include <iostream>
using namespace std;


int main(){
    ofstream tichcuc;
    tichcuc.open("tinhtutichcuc.txt",ios::out);
    string s;
    if(tichcuc.is_open()){
        cout <<"Nhap cac tu tich cuc: " << endl;
        for(int i=0;i<5;i++){
            getline(cin,s);
            tichcuc << s << endl;
        }
        tichcuc.close();
    } else{
        cout << "Khong mo duoc file!";
    }

    ofstream tieucuc;
    tieucuc.open("tinhtutieucuc.txt",ios::out);
    string s1;
    if(tieucuc.is_open()){
        cout <<"Nhap cac tu tieu cuc: " << endl;
        for(int i=0;i<5;i++){
            getline(cin,s1);
            tieucuc << s1 << endl;
        }
        tieucuc.close();
    } else{
        cout << "Khong mo duoc file!";
    }


    return 0;    
}