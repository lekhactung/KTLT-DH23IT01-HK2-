#include <iostream>

using namespace std;

class TIME{
private:
    int gio,phut,giay;
public:
    int return_gio (){
        return gio;
    }
    int return_phut (){
        return phut;
    }
    void nhapgio(){
        cout << "Nhap gio: " ;
        cin >> gio;
    }
    void nhapphut(){
        cout << "Nhap phut: " ;
        cin >> phut;
    }
    bool kiemtragio(){
        if(gio <0 || gio >24){
            return false;
        }
        return true;
    }
    bool kiemtraphut(){
        if(phut <0 || phut >=60){
            return false;
        }
        return true;
    }

};

int main(){
    TIME tm;
    do{
        tm.nhapgio(); tm.nhapphut();
        if(tm.kiemtragio() && tm.kiemtraphut()){
            if(tm.return_gio()<13){   
                cout << tm.return_gio() <<":" << tm.return_phut() <<"AM";
            } else{
                cout << tm.return_gio()-12 <<":" << tm.return_phut() <<"PM";
            }
        } else {
            cout << "Gio hoac phut khong hop le, vui long nhap lai! \n";
        }
    } while(!tm.kiemtragio()|| !tm.kiemtraphut());
    return 0;
}