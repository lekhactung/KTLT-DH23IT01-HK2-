#include <iostream>
#include <math.h>
using namespace std;
class Tamgiac{
private:
    int a,b,c;
public:
    int geta(){
        return a;
    }
    int getb(){
        return b;
    }
    int getc(){
        return c;
    }
    Tamgiac(){
        a =0;
        b=0;
        c=0;
    }
    void a_input(){
        cout << "Nhap do dai canh a: " ;
        cin >> a; 
    }
    void b_input(){
        cout << "Nhap do dai canh b: " ;
        cin >> b; 
    }
    void c_input(){
        cout << "Nhap do dai canh c: " ;
        cin >> c; 
    }
    bool hople(){
        if (a+b<=c){
            return false;
        } 
        if(a+c<=b){
            return false;
        }
        if(b+c<=a){
            return false;
        }
        return true;
    }
    void kiemtra(){
        if(a==b==c){
            cout << "Tam giac deu!";
        } else if(a==b || a==c || b==c){
            if(pow(a,2)+pow(b,2)==pow(c,2) || pow(a,2)+pow(c,2)==pow(b,2) || pow(c,2)+pow(b,2)==pow(a,2)){
                cout << "Tam giac vuong can!";
            } else {
                cout <<"Tam giac can";
            }
        } else if(pow(a,2)+pow(b,2)==pow(c,2) || pow(a,2)+pow(c,2)==pow(b,2) || pow(c,2)+pow(b,2)==pow(a,2) ){
            cout <<"Tam giac vuong!";
        } else {
            cout <<"Tam giac thuong!";
        }
    }
};

int main(){
    Tamgiac rec;
    rec.a_input();
    rec.b_input();
    rec.c_input();
    // cout << rec.geta();
    // cout << rec.getb();
    // cout << rec.getc();
    // if(rec.hople()){
    //     cout << "Yes";
    // } else {
    //     cout << "No";
    // }
    rec.kiemtra();
    return 0;
}