#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int MAX_R = 50, MAX_C=50;
void Input(int arr[][MAX_C],int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            // arr[i][j]= rand()%10;
            cin >> arr[i][j];
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

int main(){
    srand(time(NULL));
    int arr[MAX_R][MAX_C]={{1,2,3,4},{6,7,8,9}};
    int r=2 ,c=4 ;
    // cin >> r >> c;
    // Input(arr,r,c);
    // cout << "//////" << endl;
    Output(arr,r,c);
    int cnt =0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            for(int k=0;k<r;k++){
                for(int l=0;l<c;l++){
                    if(arr[i][j]+arr[k][l]==10 && (i!=k && j!=l)){
                        cnt++;
                    }
                    } 
                }
            }
        }
    cout << cnt/2;
    return 0;
}