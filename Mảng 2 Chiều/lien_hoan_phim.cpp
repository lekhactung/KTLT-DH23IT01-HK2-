#include <iostream>
#include <iomanip>
using namespace std;
const int MAX1 =2;
const int MAX2 =3;

double avg (double a[MAX1][MAX2]){
    double b[10];
    int count =0;
    int i =0,j=0;
    int sum=0;
       for (int i=0;i<MAX1;i++){
            while(j<MAX2){
            sum +=a[i][j];
            j++;
            }
            for(int z=0;z<count;z++){
                b[z]=sum;
            }
            count++;
    }
    cout << count;
    for(int z=0;z<count;z++){
            cout << b[z] << endl;
        }
}

int main(){
    double a[MAX1][MAX2];

    for (int i=0;i<MAX1;i++){
        cout << "Phim thu " << i+1 << " ";
        for (int j =0 ;j< MAX2;j++){
            cin >> a[i][j];
        }
    }
     for (int i=0;i<MAX1;i++){
        cout <<"diem : ";
        for (int j =0 ;j< MAX2;j++){
            cout << a[i][j] << " " ;
        }
        cout << endl;
    }

   for (int i=0;i<MAX1;i++){
        for (int j =0 ;j< MAX2;j++){

        }
    }
    avg(a);
    return 0;
}