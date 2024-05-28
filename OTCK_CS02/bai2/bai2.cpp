#include <iostream>
#include <string>
#include <string.h>
#include<fstream>
#include <time.h>
using namespace std;

void input_arr (int *a,int n){
    for(int i=0;i<n;i++){
        a[i]= rand()%9+1;
    }
}
void output_arr (int *a,int n){
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    system("pause");
}
void nhapfile(int *a,int n){
    ofstream ofs;
    ofs.open("bai2.txt",ios::out);
    if(ofs.is_open()){
        for(int i=0;i<n;i++){
            ofs << a[i] << endl;
        }
    } else {
        cout <<"Khong mo duoc file!";
    }
    ofs.close();
}

void docfile(int *&a,int &n){
    ifstream ifs;
    ifs.open("bai2.txt",ios::in);
    n=0;
    if(ifs.is_open()){
        int tmp;
        while(ifs >> tmp){
            n++;
        }
        ifs.clear();
        ifs.seekg(0);
        a = new int[n];
        for(int i=0;i<n;i++){
            ifs >> a[i];
        }
    } else {
        cout <<"Khong mo duoc file!" ;
    }
    ifs.close();
}
void menu(){
    cout << "1. Ghi cac phan tu cua mang 1 chieu xuong file\n"
        <<"2. Doc cac gia tri so nguyen luu vao mang 1 chieu tu file \n"
        <<"3. Nhap cac phan tu so nguyen cho mang 1 chieu tu ban phim \n"
        <<"4. Xuat cac gia tri len man hinh \n";
}
int main(){
    srand(time(NULL));
    int *a, n;
    int choice;
    // menu();
    do{
        do{
            system("cls");
            menu();
            cout <<"CHON CHUONG TRINH : ";  
            cin >> choice;
            if(choice !=1 && choice!=2 &&choice!=3 &&choice!=4&&choice !=0){
                cout <<"Chuong trinh khong hop le, vui long nhap lai! \n";
                system("pause");
            }
        } while(choice !=1 && choice!=2 &&choice!=3 &&choice!=4&&choice!=0);


        switch (choice)
        {
        case 1:
            nhapfile(a,n);
            break;
        case 2:
            docfile(a,n);
            // output_arr(a,n);
            break;
        case 3:
            cout <<"Nhap so luong phan tu : "; cin >> n;
            a = new int[n];
            input_arr(a,n);
            // output_arr(a,n);
            // nhapfile(a,n);
            break;
        case 4:
            output_arr(a,n);
            break;
        default:
            break;
        }
    
    } while(choice !=0);
    // docfile(a,n);
    // output_arr(a,n);
    return 0;
}