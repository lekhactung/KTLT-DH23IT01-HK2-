#include <iostream>
using namespace std;


int main(){
	int a[50][50],b[50][50],sum[50][50],tich[50][50];
	int r, c;
	cout << "Nhap chieu dai va chieu rong cua ma tran 1 : ";
	cin >> r >> c;
	cout << "Nhap cac gia tri cho ma tran 1 " << endl;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> a[i][j];
		}
	}
	int ro, co;
	cout << "Nhap chieu dai va chieu rong cua ma tran 2 : ";
	cin >> ro >> co;
	cout << "Nhap cac gia tri cho ma tran 2 " << endl;
	for (int i = 0; i < ro; i++) {
		for (int j = 0; j < co; j++) {
			cin >> b[i][j];
		}
	}
	if (r == ro && c == co) {
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				sum[i][j] = a[i][j] + b[i][j];
			}
		}
		cout << "Tong cua 2 ma tran la: " << endl;
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cout << sum[i][j] << " ";
			}
			cout << endl;
		}
	}
	else {
		cout << "Hai ma tran khong deu nhau, khong the tinh tong " << endl;
	}

	if (r == ro && c == co) {
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				tich[i][j] = a[i][j] * b[i][j];
			}
		}
		cout << "Tich cua 2 ma tran la: " << endl;
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cout << tich[i][j] << " ";
			}
			cout << endl;
		}
	}
	else {
		cout << "Hai ma tran khong deu nhau, khong the tinh tong " << endl;
	}
	system("pause");
	return 0;
}