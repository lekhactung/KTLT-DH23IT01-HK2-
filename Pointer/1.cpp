#include <iostream>
#include <string>
using namespace std;
void upper(string *p){
    for(int i=0;i<(*p).size();i++){
        if((*p)[i]>='a' && (*p)[i] <= 'z'){
            (*p)[i] -=32;
        }
    }
}

int main(){
    string s = "codelearn";
    string *p = &s; 
    upper(&s);
    cout << s;
}