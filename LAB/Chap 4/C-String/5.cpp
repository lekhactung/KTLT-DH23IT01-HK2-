#include <bits/stdc++.h>
using namespace std;

const int MAX_LENGTH = 100;
int main(){
    char password[MAX_LENGTH];

    bool loged_in = false;
    int so_lan_nhap_lai =  3;

    while(so_lan_nhap_lai>0 && !loged_in){
        cout << "Nhap password: ";
        cin.get(password,MAX_LENGTH);
        for(int i=0;i<strlen(password);i++){
            cout << "X";
        }
        cout << endl;
        if(strcmp(password,"SinhVienCQ")==0){
            cout << "Da dang nhap!" << endl;
            loged_in=true; 
        } else {
            cout <<"Password khong chinh xac. Vui long nhap lai!";
            cin.ignore();   
            so_lan_nhap_lai--;
            if (so_lan_nhap_lai>0){
                cout << "Ban con "<<so_lan_nhap_lai <<" so lan nhap lai!" << endl;
            } else{
                cout << "Ban da het so lan nhap lai!" << endl;
            }
        }
    }
    return 0;
}