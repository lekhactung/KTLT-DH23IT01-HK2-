#include <bits/stdc++.h>
using namespace std;

void menuChoice(){
    cout << "1. Nhan xe vao bai \n"
        << "2. Xuat xe ra bai \n"
        << "3. Thong ke \n";
}

struct Xe{
    int id;
    time_t thoiGianVao;
    bool theoThang;
};  

struct baiXe{
        vector<Xe> danhSachXe;
        int tienthuduoc =0 ;
        void nhanXeVao(Xe xe){
            danhSachXe.push_back(xe);
        }
        void xuatXeRa(int id){
            time_t thoiGianRa = time(0);
            for(int i=0;i<danhSachXe.size();i++){
                if(danhSachXe[i].id==id){
                    if(!danhSachXe[i].theoThang){
                        int tien =0;
                        double thoigian = thoiGianRa - danhSachXe[i].thoiGianVao;
                        if(thoigian <= 60){
                            tien = 50000;
                        }
                        else {
                            tien = 50000 + ((thoigian-60)/30) * 20000;
                        }
                        tienthuduoc += tien;
                    }
                    danhSachXe.erase(danhSachXe.begin()+i);
                }
            }
        }
        void thongke (){
            cout << "So xe con lai trong bai: " << danhSachXe.size() << endl;
            cout << "so tien da thu: " << tienthuduoc;
        }
};

int main(){
    baiXe baixe;
    Xe xe1 = {1,time(0),true};
    Xe xe2 = {2,time(0),false};
    Xe xe3 = {3,time(0),true};
    Xe xe4 = {4,time(0),false};

    baixe.nhanXeVao(xe1);
    baixe.nhanXeVao(xe2);
    baixe.nhanXeVao(xe3);
    baixe.nhanXeVao(xe4);

    baixe.xuatXeRa(2);
    baixe.xuatXeRa(4);


    baixe.thongke();
    return 0;
}