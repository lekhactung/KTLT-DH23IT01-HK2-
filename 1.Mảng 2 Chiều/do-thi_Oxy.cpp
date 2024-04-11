#include <iostream>
using namespace std;
const int MAX1 = 6;
const int MAX2 = 5;



int main(){
    int arr[MAX1][MAX2];
    int x,y;
    cout << "Nhap toa do x,y: ";
    cin >> x >> y;
    for(int i=MAX1-1;i>=0;i--){
        cout << i ;
        for(int j=1;j<=MAX2;j++){
            if(arr[j][i]==arr[x][y]){
                cout << " x ";
            } else cout << " ";
            if(i==0){
                cout << j ;
            }
        }
        cout << endl;
    }
    return 0;
}