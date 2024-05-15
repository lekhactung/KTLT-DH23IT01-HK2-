#include <stdio.h>
#include <math.h>

int main(){
    int n = 10;
    int a[n] = {1, 3, 4, 5, 5, 2, 4, 1, 2, 3};
    int res = 0;
    for(int i = 0; i < n; i++){
        //Cần kiểm tra a[i] đã xuất hiện chưa?
        int check = 1;
        //Xét các phần tử đứng trước a[i]
        for(int j = 0; j < i; j++){
            if(a[i] == a[j]){
                check = 0; // nếu có bất kì phần tử nào trước a[i] = a[j] tức là số đó đã xuất hiện -> trả về giá trị false
                break; // và dừng vòng lặp j lại
            }
        }
        if(check == 1){ // nếu check = true -> số đó chưa từng xuất hiện thì biến đếm res +1;
            ++res;
        }
    }
    printf("So luong gia tri khac nhau trong mang : %d\n", res);
    return 0;
}
