#include <bits/stdc++.h>
using namespace std;

const int MAX_LENGTH = 100;

string chuyenDoiTenThang(int thang) {
    switch (thang) {
        case 1:
            return "January";
        case 2:
            return "February";
        case 3:
            return "March";
        case 4:
            return "April";
        case 5:
            return "May";
        case 6:
            return "June";
        case 7:
            return "July";
        case 8:
            return "August";
        case 9:
            return "September";
        case 10:
            return "October";
        case 11:
            return "November";
        case 12:
            return "December";
        default:
            return "";
    }
}


int main(){
    char date[MAX_LENGTH];
    cin.get(date,MAX_LENGTH);

    char *thang_str = strtok(date,"/");
    char *ngay_str = strtok(NULL,"/");
    char *nam_str = strtok(NULL,"/");

    int thang = atoi(thang_str);
    int ngay = atoi(ngay_str);
    int nam = atoi (nam_str);
        
    string tenthang = chuyenDoiTenThang(thang);

    cout << tenthang << " " << ngay << "," << "19"<<nam << endl;  

    return 0;
}