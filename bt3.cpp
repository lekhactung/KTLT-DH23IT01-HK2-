#include <iostream>
using namespace std;
const int MAX_ROW=50,MAX_COL=50;
void Input(int arr[][MAX_COL],int r,int c){
    cout << " nhap gia tri trong mang: " << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           cin>> arr[i][j];
        }
    }
}
void Sum(int arr[][MAX_COL],int r,int c){
    int sum =0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
    }
    cout << "Tong cac phan tu trong mang la: "<< sum << endl;
}
void minMax(int arr[][MAX_COL],int r, int c){
    int min = arr[0][0];
    int max = arr[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]<min){
                min =arr[i][j];
            }
            if(arr[i][j]>max){
                max =arr[i][j];
            }
        }
    }
    cout << "Gia tri nho nhat  la: " << min << endl;
    cout << "Gia tri lon nhat  la: " << max << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==min){
                cout << "Gia tri nho nhat nam tai hang thu: "<< i+1 << " , cot thu: " << j+1 << endl;
            }
            if(arr[i][j]==max){
                cout << "Gia tri lon nhat nam tai hang thu: "<< i+1 << " , cot thu: " << j+1 << endl;
            }
        }
    }
}
int main(){
    int r,c;
    // a 
    do{
        cout << "Nhap so hang: ";
        cin >> r;
        cout << "Nhap so cot: ";
        cin >> c;
        if(r>10 || c>15){
            cout << "Vui long nhap lai!" << endl;
        }
    } while(r>10 || c>15);
    int arr[MAX_ROW][MAX_COL];
    Input(arr,r,c);
    // b
    Sum(arr,r,c);
    //c
    minMax(arr,r,c);
    return 0;
}