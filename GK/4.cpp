#include <iostream>

using namespace std;

const int MAX_SIZE = 10;


void r_c_input (int &r,int &c){
    do{
        cout <<"Nhap so hang : " << endl; cin >> r;
        cout << "Nhap so cot :"  << endl; cin >> c;
        if(r <= 0 || r > MAX_SIZE ){
            cout << "So dong khong hop le, vui long nhap lai!" << endl;
        } if (c <=0 || c > MAX_SIZE){
            cout << "So cot khong hop le, vui long nhap lai!" << endl;
        }
    } while ( r <= 0 || r > MAX_SIZE || c <=0 || c > MAX_SIZE);
}

void input_2dArr (int **a,int &r,int &c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            a[i][j] = rand() % 9 + 1;
        }
    }
}

void output_2dArr (int **a,int &r,int &c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout <<  a[i][j] << " ";
        }
        cout << endl;
    }
}

int sum(int **a,int r,int c){
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum += **(a+i)+j;
        }
    }
    return sum;
}

bool isprime(int n){
    if(n<2){
        return false; 
    } else {
        for(int i=2;i<n/2;i++){
            if(n%i==0){
                return false;
            }
        }
    }
    return true;
}

int *prime (int **a,int r,int c,int &cnt){
    const int max  = r *c;
    int *b = new int [max];
    cnt=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(isprime(**(a+i)+j)){
                b[cnt++] = **(a+i)+j;
            }
        }
    }
    return b;
}


int find_1st_odd(int **a,int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]%2!=0){
                return a[i][j];
            }
        }
    }    
    return NULL;
}

void col_index (int **a,int r){
    int place;
    cout << "Nhap vi tri cot can in cac phan tu : ";
    cin >> place;
    for(int i=0;i<r;i++){
        cout << a[i][place-1] << " ";
    }
    cout << endl;
}

void row_index (int **a,int c){
    int place;
    cout << "Nhap vi tri dong can in cac phan tu : ";
    cin >> place;
    for(int i=0;i<c;i++){
        cout << a[place-1][i] << " ";
    }
    cout << endl;
}
bool iseven (int n){
    if(n%2==0){
        return true;
    }
    return false;
}

void col_even(int **a,int r,int c){
    int place;
    cout << "Nhap vi tri cot can in cac phan tu chan : ";
    cin >> place;
    for(int i=0;i<c;i++){
        if(iseven(a[i][place-1])){
            cout << a[i][place-1]<< " ";
        }
    }
    cout << endl;
}
int main(){
    srand(time(NULL));
    int r, c;
    r_c_input(r,c);
    int **a;
    a = new int *[r];
    for(int i=0;i<r;i++){
        a[i] = new int [c];
    }
    input_2dArr(a,r,c);
    output_2dArr(a,r,c);
    ////////
    cout <<"Tong cua ma tran : " << sum(a,r,c) << endl;
    ////////
    int cnt =0;
    int *b = prime(a,r,c,cnt);
    cout << "Cac so nguyen to co trong mang la : ";
    for(int i=0;i<cnt;i++){
        cout << b[i] << " ";
    }
    cout << endl;
    ////////
    cout << "So le dau tien trong mang la: " << find_1st_odd(a,r,c) << endl;
    ////////
    col_index(a,r);
    ////////
    row_index(a,c);
    ///////
    col_even(a,r,c);
    //giai phong
    delete[] a;
    for (int i = 0; i < r; ++i) {
        delete[] a[i];
    }
    delete[] b;
    return 0;
}