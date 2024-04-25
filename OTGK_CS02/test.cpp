#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl << "///" << endl;
    int pos; cout << "pos" <<endl;
    cin >> pos;
    for(int i=pos-1;i<=n;i++){
        arr[i]=arr[i+1];
    }
    n--;

    cout <<"////" << endl;

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }


    return 0;
}