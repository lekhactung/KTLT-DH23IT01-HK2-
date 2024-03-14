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
void Sort(int arr[][MAX_C],int r,int c){
    int k,l;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            for(k=0;k<r;k++){
                int t=0;
                if(k==i){
                    t=j+1;
                }
                for(l=t;l<c;l++){
                    if(arr[i][j]<=arr[k][l]){
                        int temp = arr[i][j];
                        arr[i][j]= arr[k][l];
                        arr[k][l]=temp;
                    }
                }
            }
            
        }
    }
    Output(arr,r,c);
}
int main(){
    srand(time(NULL));
    int arr[MAX_R][MAX_C];
    int r=2 ,c=4 ;
    // cin >> r >> c;
    Input(arr,r,c);
    Output(arr,r,c);
    cout << "//////" << endl;
    Sort(arr,r,c);
    return 0;
}