#include <iostream>
#include <string>
using namespace std;

int tongchan(int n){
    if(n<10){
        if(n%2==1){
            return 0;
        } else {
            return n;
        }
    } else {
        if(n%2==1){
            return tongchan(n/10);
        } else {
            return tongchan(n/10)+n%10;
        }
    }
}
int tongle(int n){
    if(n<10){
        if(n%2==0){
            return n;
        } else {
            return 0;
        }
    } else {
        if(n%2==1){
            return tongle(n/10)+n%10;
        } else {
            return tongle(n/10);
        }
    }
}

bool snt(int n,int i){
    if(n<2){
        return false;
    } else {
        if(i==n){
            return true;
        } else if(n%i==0){
            return false;
        } else {
            return snt(n,i+1);
        }
    }
}

bool checkdx(int n,int tmp,int dx=0){
    if(n==dx){
        return true;
    } else if ( tmp ==0 && n!=dx ){
        return false;
    } else {
        tmp=n%10;
        dx=dx*10+tmp;
        n/=10;
        return (n,tmp,dx);
    }
}

int sodaonguoc(int s){
    if (s>0){
        cout << s%10;
        return sodaonguoc(s/10);
    } return sodaonguoc(s/10);
}

bool daonguoc(string n,int i,int j){
    if(j-i==0){
        return true;
    } else {
        if(n[i]!=n[j]){
            return false;
        }
        else {
            return daonguoc(n,i++,j--);
        }
    }
}

bool check( int s){
    if(sodaonguoc(s)==s){
        return true;
    } return false;
}

bool sdn(int n){}

int main(){
    int s = 1234;
    int n = 1221;
    int i,j;
    int tmp,dx;
    // cout << daonguoc(n,i,j);
    // cout << check(s);
    cout << checkdx(n,tmp,dx);

    return 0;
}