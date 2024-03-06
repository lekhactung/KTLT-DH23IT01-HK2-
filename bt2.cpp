#include <iostream>
using namespace std;
const int ROW=3;
const int COL=4;
int main(){
    int i=0,j=0;
    int arr[ROW][COL];
    cout << "Nhap gia tri trong mang: " << endl;
    while(i<ROW){
        while(j<COL){
            cin >> arr[i][j];
            j++;
        }
        j=0;
        i++;
    }
    cout << "Mang dang luu la: " << endl;
    i=0;
    while(i<ROW){
        while(j<COL){
            cout << arr[i][j] << " ";
            j++;
        }
        cout << endl;
        j=0;
        i++;
    }
    return 0;
}