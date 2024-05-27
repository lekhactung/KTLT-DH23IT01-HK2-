#include <iostream>
#include <fstream>
using namespace std;

void menu(){
    cout << "1. Ghi cac phan tu cua mang 1 chieu xuong file\n"
        <<"2. Doc cac gia tri so nguyen luu vao mang 1 chieu tu file \n"
        <<"3. Nhap cac phan tu so nguyen cho mang 1 chieu tu ban phim \n"
        <<"4. Xuat cac gia tri len man hinh \n";
}
void input(int *a,int &n){
    cout << "Nhap so gia tri cua mang : " ; cin >> n;
    for(int i=0;i<n;i++){
            a[i] = rand()%9+1;
        
    }
}
void output(int **a,int n){
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}

void ghifile(int *a,int n){
    ofstream ofs;
    ofs.open("bai2.txt", ios::out);
    if (ofs.is_open()){
        for(int i=0;i<n;i++){
            ofs << a[i] << endl;
        }
        ofs.close();
    } else{
        cout <<"Khong mo duoc file!" << endl;
    }
    ofs.close();
}

void docsonguyen(int *a,int n){
    ifstream ifs;
    ifs.open("bai2.txt",ios::in);
    string line;
    if(ifs.is_open()){
        while(!ifs.eof()){
            getline(ifs,line);
            cout << line << " ";
        }
    }else {
        cout <<"Khong mo duoc file!";
    } 
    cout << endl;
    system("pause");
    ifs.close();
}

int main(){
    srand(time(NULL));
    int *a = new int [100];
    int n;
    int choice;
    do{
        system("cls");
        menu();
        cout << "NHAP CHUONG TRINH; ";
        cin >> choice;
        

        switch (choice)
        {
        case 1:
            input(a,n);
            ghifile(a,n);
            break;
        case 2:
            docsonguyen(a,n);
            break;
        default:
            break;
        }
    } while(choice !=0);

    // input(a,n); 
    // ghifile(a,n);
    // docsonguyen(a,n);

    return 0;
}