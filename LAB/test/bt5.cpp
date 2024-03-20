#include <iostream>
using namespace std;

int main(){
	cout << "Nhap chieu dai ma tran vuong: ";
	int d; cin >> d;
	int arr[50][50];
	cout << "Nhap cac gia tri cho mang";
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			cin >> arr[i][j];
		}
	}

	int sum = 0;
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			if (j == i) {
				sum += arr[i][j];
			}
		}
	}
	cout << "Tong cac gia tri trong duong cheo chinh la: " << sum << endl;
	sum = 0;
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			if (i+j+1==d) {
				sum += arr[i][j];
			}
		}
	}
	cout << "Tong cac gia tri trong duong cheo phu la: " << sum << endl;
	system("pause");
	return 0;
}