#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
    srand(time(NULL));
    int n;
    cin >> n;
    int *p = new int [n];
    for(int i=0;i<n;i++){
        *(p++) = rand() %10;    
        cout << *p  <<" ";
    }
    delete []p;
    return 0;

}