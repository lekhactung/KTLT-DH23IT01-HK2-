#include <bits/stdc++.h>
using namespace std;

class Xe{
    public : 
        string bsx;
        int type;
        string giovao;
};
 
class BGX{
    private: 
        Xe **xe;
        Xe *xethang;
        int tienthu;
    public: 
        void nhapxe(string bsx, BGX bgx){

        }

};

int main(){
    BGX bgx;
    int n,m;
    cout << "nhap kich thuoc BGX: ";
    cin >> n >> m;
    int **bgx_l;
    bgx_l = new int* [n];
    for(int i=0;i<n;i++){
        bgx_l[i] = new int [m];
    }

    
    return 0;
}