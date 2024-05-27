#include <bits/stdc++.h>
using namespace std;
const int maxc = 100;

void menu(){
    cout << "1. Nhap chuoi \n"
        << "2. Kiem tra chuoi co phai ki tu so \n"
        << "3. Kiem tra chuoi co chua khoang trang dau va cuoi \n"
        << "4. Tach bo khoang trang dau va cuoi \n"
        << "5. Tach tung tu trong chuoi bang ki tu nguoi dung nhap \n"
        << "6. Tra ve ten dia phuong tuong ung 3 ki tu dau cua chuoi sdt \n"
        <<"7. Dem so cau trong chuoi \n"
        <<"8. Dem so dau cau trong chuoi \n" 
        <<"9. Dem so tu trong chuoi \n";
}

void nhapchuoi(char *a){
    cout <<"Nhap chuoi :  ";
    cin.getline(a,maxc);
}

void xuatchuoi ( char *a){
    for(int i=0;i<strlen(a);i++){
        cout << a[i];
    }
    cout << endl;
}
//BAI 1
bool ktkituso(char *a){
    for(int i=0;i<strlen(a);i++){
        if(isdigit(a[i])){
            return true;
        } else{
            return false;
        }
    }
    return false;
}
//BAI 2
void space_check(char *a){
    if( a == NULL || strlen(a) ==0){
        cout <<"Chuoi khong hop le!";
    } 
    else if (a[0] == ' ' && a[strlen(a)-1]==' '){
        cout << "Chuoi chua khoang trang dau va cuoi!";
    }
    else if (a[0] == ' '){
        cout << "Chuoi chua khoang trang dau";
    }
    else if(a[strlen(a)-1]==' '){
        cout <<"Chuoi chua khoang trang cuoi";
    }
    else {
        cout <<"Chuoi khong chua khoang trang dau va cuoi"; 
    }
    cout << endl;
}

//BAI 3
void spacedel(char *a){
    char *ptok = strtok(a," ");
    while(ptok !=NULL){
        cout << ptok;
        ptok = strtok(NULL," ");
    }
    cout << endl;
}
//BAI 4
void tachchuoi(char *a){
    char x[10];
    cin.getline(x,10);
    char* ptok = strtok(a,x);
    while(ptok!=NULL){
        cout << ptok << endl;
        ptok=strtok(NULL,x);
    }
}
//BAI 5
//BAI 6
//BAI 7
//BAI 8
int word_cnt(char *a){
    int cnt;
    for(int i=0;i<strlen(a);i++){
        if(isalpha(a[i]) && !isspace(a[i])){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    char *a = new char [maxc];
    int choice ;
    do{
        do{
            system("cls");
            menu();
            cout << "Nhap chuong trinh: ";
            cin >> choice;
            cin.ignore();
            if((choice !=1 && choice !=2 && choice !=3 && choice !=4 && choice !=5 && choice !=6 && choice !=7 && choice !=8 && choice !=9)){
                cout <<"Chuong trinh khong hop le, vui long nhap lai! \n";
            }
        } while(choice !=1 && choice !=2 && choice !=3 && choice !=4 && choice !=5 && choice !=6 && choice !=7 && choice !=8 && choice !=9);
        

        switch (choice)
        {
        case 1:
            nhapchuoi(a);
            break;
        case 2:
            xuatchuoi(a);
            if(ktkituso(a)){
                cout <<"Chuoi la ki tu so!" << endl;
            } else {
                cout <<"Chuoi khong phai ki tu so!" <<endl;
            }
            break;
        case 3:
            space_check(a);
            break;
        case 4:
            spacedel(a);
            break;
        case 5:
            tachchuoi(a);
            break;
        case 9:
            cout << "Chuoi co "<< word_cnt << " tu";
            break;
        default:
            break;
        }
        system("pause");
    } while(choice !=0);


    return 0;
}