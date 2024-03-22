#include <iostream>
using namespace std;

void pascal(int **arr,int h){
    for(int i=0;i<h;i++){
        arr[i][0]=1;
        arr[i][i]=1;
    }
    for(int i=1;i<h;i++){
        for(int j=1;j<i;j++){
            arr[i][j]=arr[i-1][j-1] + arr[i-1][j];
        }
    }
    for(int i=0;i<h;i++){
        for(int k=0;k<=i;k++){
            cout << arr[i][k] << " ";
        }
        cout << endl;
    }
}

int main(){
    int h;
    cout << "Nhap chieu dai ma tran vuong: ";
    cin >> h ;
    int **arr;
    arr = new int* [h];
    for(int i=0;i<h;i++){
        arr[i] = new int [h];
    }
    pascal(arr,h);



    for(int i=0;i<h;i++){
        delete[] arr[i];
    }
    delete [] arr;
    arr = nullptr;
    return 0;
}