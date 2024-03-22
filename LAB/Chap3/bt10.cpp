#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


void output(int **arr,int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    srand(time(NULL));
    int r,c;
    cout << "Nhap chieu dai va chieu rong cua ma tran: ";
    cin >> r >> c ;
    int **arr;
    arr = new int* [r];
    for(int i=0;i<r;i++){
        arr[i] = new int [c];
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr[i][j]=rand()%10+1;
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
//Tong
    int tong=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            tong+=arr[i][j];   
        }
    }
    cout << tong << endl;
//Tich
    int tich=1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            tich*=arr[i][j];   
        }
    }
    cout << tich << endl;

    for(int i=0;i<r;i++){
        delete[] arr[i];
    }
    delete [] arr;
    arr = nullptr;
    return 0;
}