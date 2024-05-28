#include <iostream>
#include <string>
using namespace std;

class Kho{
private:
    string makho,tenkho,diachi;
public:
    string getmakho(){
        return makho;
    }
    string gettenkho(){
        return tenkho;
    }
    string getdiachi(){
        return diachi;
    }
    void setmakho(){
        cout << "Nhap ma kho: ";
        getline(cin,makho);
    } 
    void settenkho(){
        cout <<"Nhap ten kho: ";
        getline(cin,tenkho);
    }
    void setdiachi(){
        cout <<"Nhap dia chi : ";
        getline(cin,diachi);
    }
    Kho(const string& makho = "", const string& tenkho = "", const string& diachi = "") 
        : makho(makho), tenkho(tenkho), diachi(diachi) {}

};

int main(){
    Kho kho;
    cout << kho.getmakho();
    cout << kho.gettenkho();
    cout << kho.getdiachi();
    return 0;
}