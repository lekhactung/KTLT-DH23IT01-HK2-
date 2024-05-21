#include <iostream>
using namespace std;
void input(int a[],int n){
    for(int i=0;i<n;i++){
        a[i] = rand() %10 +1;
    }
}

void output(int a[],int n){
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}

void swap (int a,int b){
    int tmp = a; 
    a = b;
    b = tmp;
}


void sort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[j] <= a[i]){
                int tmp = a[j];
                a[j] = a[i];
                a[i]=tmp;
            }
        }
    }
}
int main(){
    srand(time(NULL));
    int a[100];
    input(a,10);
    output(a,10);
    sort(a,10);
    cout << endl;
    output(a,10);
}