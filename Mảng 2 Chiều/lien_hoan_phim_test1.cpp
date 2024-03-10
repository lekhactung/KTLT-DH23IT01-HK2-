#include <iostream>
#include <iomanip>
using namespace std;

const int MAX1=10;
const int MAX2=10;
void input(double a[MAX1][MAX2],int r,int c){
    for ( int i =0;i<r;i++){
        cout << "nhap diem "<< i+1 << " ";
        for (int j=0;j<c;j++){
            cin >> a[i][j];
        }
    }
}

void output (double a[MAX1][MAX2],int r,int c){
    for ( int i =0;i<r;i++){
        for (int j=0;j<c;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}


void avg(double a[MAX1][MAX2],int r,int c){
    int b[10];
    for ( int i =0;i<r;i++){
        double sum=0;
        for (int j=0;j<c;j++){
            sum+=a[i][j];
        }
        double avg_r = sum/c;
        cout << avg_r << endl;
        for(int z=0;z<r;z++){
            b[z]=avg_r;
        }
    }
    
}

int main(){
    double a[MAX1][MAX2];
    int r,c;
    input(a,2,3);
    avg(a,2,3);
    return 0;
}