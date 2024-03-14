#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int MAX_R = 50, MAX_C=50;
void Input(int arr[][MAX_C],int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr[i][j]= rand()%10;
            // cin >> arr[i][j];
        }

    }
}
void Output(int arr[][MAX_C],int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void chuyen(int arr[][MAX_C],int r,int c,int b[]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            b[i*c+j]=arr[i][j];
        }
    }
}
int main(){
    srand(time(NULL));
    int arr[MAX_R][MAX_C];
    int r=2 ,c=4 ;
    int b[c];
    // cin >> r >> c;
    Input(arr,r,c);
    Output(arr,r,c);
    cout << "//////" << endl;
    for(int i=0;i<c;i++){
        cout << b[i];
    }
    return 0;
}