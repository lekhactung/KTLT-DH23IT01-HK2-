#include <iostream>
using namespace std;

// Hàm đệ quy tính giá trị của dòng row và cột col trong tam giác Pascal
int pascal(int row, int col) {
    if (col == 0 || col == row)
        return 1;
    else
        return pascal(row - 1, col - 1) + pascal(row - 1, col);
}

// Hàm đệ quy in ra tam giác Pascal
void printPascal(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << pascal(i, j) << " ";
        }
        cout << endl;
    }
}

long bin_to_dec(long long n){
    if (n == 0)
        return 0;
    return bin_to_dec(n/10)*2 + n%10;
}

int demle(int a[],int n, int cnt){
    if(n==0){
        return cnt;
    } else{
        if(a[n-1]%2!=0){
            return demle(a,n-1,cnt++);
        } else{
            return demle(a,n-1,cnt);
        }
    }
}



int main() {
    // int numRows;
    // cout << "Nhập số hàng của tam giác Pascal: ";
    // cin >> numRows;

    // long long n ;
    // cin >> n ;

    // cout << bin_to_dec(n);

    int a[10];
    for(int i=0;i<10;i++){
        a[i]=rand()%10 +1;
    }
     for(int i=0;i<10;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout <<demle(a,10,0);


    return 0;
}
