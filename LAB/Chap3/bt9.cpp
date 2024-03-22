#include <iostream>
using namespace std;

void input(int **arr,int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << "[ " << i+1 << " ] [ " << j+1 << " ]   ";
            cin >> arr[i][j];
        }
    }
}
void output(int **arr,int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int snt(int n){
    if(n < 2 ){
        return 0;
    } 
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0) {
            return 0;
        }
    }
    return n>1;
}
int sumSNT(int **arr,int r,int c){
    int sum=0;
    for(int i = 0; i < r ; i++ ){
        for( int j = 0 ; j < c; j++){
            if( snt (arr[i][j] )){
                sum += arr[i][j];
                // cout << arr[i][j] << " ";
            }
        }
    }
    return sum;
}

int main(){
    int r,c;
    cout << "Nhap chieu dai va chieu rong cua ma tran: ";
    cin >> r >> c ;
    int **arr;
    arr = new int* [r];
    for(int i=0;i<r;i++){
        arr[i] = new int [c];
    }
    input(arr,r,c);
    cout << sumSNT(arr,r,c);

    for(int i=0;i<r;i++){
        delete[] arr[i];
    }
    delete [] arr;
    arr = nullptr;
    return 0;
}