#include <iostream>
using namespace std;
const int Max_R = 50, MAX_C = 50;
void Input(int arr[][MAX_C],int r, int c){
	cout << "Nhap cac phan tu trong mang " << endl;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> arr[i][j];
		}
	}
}
void Output(int arr[][MAX_C], int r, int c) {
	cout << "Cac phan tu dang luu trong mang la:  " << endl;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void Sum ( int arr[][MAX_C], int r, int c) {
	int sum = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			sum += arr[i][j];
		}
	}
	cout << "Tong cac phan tu trong mang la : " << sum << endl;
}
void minMax(int arr[][MAX_C], int r, int c) {
	int min = arr[0][0], max = arr[0][0];
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (arr[i][j] >= max) {
				max = arr[i][j];
			}
			if (arr[i][j] <= min) {
				min = arr[i][j];
			}
		}
	}
	cout << "Phan tu nho nhat trong mang la: " << min << endl;
	cout << "Phan tu lon nhat trong mang la: " << max << endl;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (arr[i][j] == max) {
				cout << "Gia tri lon nhat nam tai hang thu " << i + 1 << " cot thu " << j + 1 << endl;
			}
			if (arr[i][j] == min) {
				cout << "Gia tri nho nhat nam tai hang thu " << i + 1 << " cot thu " << j + 1 << endl;
			}
		}
	}
}

int main(){
	int arr[Max_R][MAX_C];
	int r, c;
	do {
		cout << "Nhap so hang va so cot: ";
		cin >> r >> c;
		if (r > 10 || c > 15) {
			cout << "Vui long nhap lai! " << endl;
		}
	} while (r > 10 || c > 15);
	Input(arr, r, c);
	Sum(arr, r, c);
	minMax(arr, r, c);
	system("pause");
	return 0;
}