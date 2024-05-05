#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

bool isOdd(int n){
    if (n%2==0){
        return false;
    }
    return true;
}

bool isEven (int n){
    return !isOdd(n);
}

bool isPrime(int n){
    if ( n < 2){
        return false;
    } else{
        for(int i=2;i<=n/2;i++){
            if (n%i == 0){
                return false;
            }
        }
        return true;
    }
}


int main(){
    srand(time(NULL));
    int n = rand() % 100;
    int num;
    ofstream outFile;
    outFile.open("1.txt", ios::out);

    if(outFile.is_open()){
        for(int i=0;i<n;i++){
            num = rand() % (50-30+1)+30;
            outFile << num << "@" << endl;
        }
        outFile.close();
        cout <<"Ghi file thanh cong!";
    } else {
        cout <<"Khong mo duoc file!";
    }
    cout << endl;


    ifstream inFile;
    inFile.open("1.txt");
    int cnt =0 , cnt1=0, cnt2 =0;
    if(inFile.is_open()){
        while(!inFile.eof()){
            inFile >> num;
            if(isOdd(num)){
                cnt ++;
            }
            if(isEven(num)){
                cnt1++;
            }
            if(isPrime(num)){
                cnt2++;
            }
            inFile.ignore(1);
        }
        cout << "file co "<< cnt <<" so le" << endl;
        cout << "file co "<< cnt1 <<" so chan" << endl;
        cout << "file co "<< cnt2 <<" so nguyen to" << endl;

        inFile.close();
    } else {
        cout <<"Khong mo duoc file!";
    }
    


    return 0;
}