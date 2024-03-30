#include <iostream>
#include <string.h>
using namespace std;
bool checkstring (char a[],char b[]){
    bool flag = false;
    for (int i =0 ; i<strlen(a);i++){
        for(int j=0;j<strlen(b);j++){
            if(a[i] > b[j]){
                flag = true;
            } 
            if(flag){
                return flag;
            }
        }
    }
    return flag;
}
// bool checkstring2 (char *c,char *d){
//     bool flag = false;
//     for (int i =0 ; i<strlen(c);i++){
//         if(c[i] < d[i]){
//             flag = true;
//         } 
//     }
//     return flag;
// }


int main(){
    char a[] = "xyz";
    char b[] = "xym";    
    // if(checkstring(a,b)){
    //     cout << "a>b";
    // } else {
    //     cout << "a<b";
    // }
    if(strcmp(a,b)<0){
        cout << "a < b";
    } else if(strcmp(a,b)>0){
        cout << "a > b";
    } else {
        cout << "a = b";
    }

    // cout << endl;
    // char *c = "azc";
    // char *d = "xo";

    // if(checkstring2(c,d)){
    //     cout << "c < d";
    // } else {
    //     cout << "d < c";
    // }
}
