#include <iostream>
using namespace std;
const int Max_R = 50, MAX_C = 50;
void Output(int arr[][MAX_C], int d) {
	cout << "Cac phan tu dang luu trong mang la:  " << endl;
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void Input(int arr[][MAX_C], int d){
	for (int i = 0; i < d; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < d; j++) {
				cin >> arr[j][i];
			}
		}
		if (i % 2 != 0) {
			for (int j = d - 1; j >= 0; j--) {
				cin >> arr[j][i];
			}
		}
	}
}
int main() {
	int d;
	int arr[Max_R][MAX_C];
	do {
		cout << "Nhap chieu dai ma tran: ";
		cin >> d;
		if (d < 2 || d >10) {
			cout << "Vui long nhap lai! " << endl;
		}
	} while (d < 2 || d >10);
	Input(arr, d);
	Output(arr, d);
	system("pause");
	return 0;
}