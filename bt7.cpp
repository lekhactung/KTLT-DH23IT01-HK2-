#include <iostream>
#include <iomanip>
using namespace std;
const int Max_R = 50, MAX_C = 50;

void Input(int arr[][MAX_C], int r, int c) {
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

int Sum(int arr[][MAX_C], int r, int c) {
	int sum = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			sum += arr[i][j];
		}
	}
		return sum;
}

float TBC(int arr[][MAX_C], int r, int c) {
	return Sum(arr, r, c) / r/c;
}

bool timX(int arr[][MAX_C],int r, int c,int x) {
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (arr[i][j] == x) {
				return true;
			}
		}
	}
	return false;
}
int main(){
	int arr[Max_R][MAX_C];
	int r, c;
	do {
		cout << "Nhap so hang va so cot: ";
		cin >> r >> c;
		if (r <=0) {
			cout << "Vui long nhap lai! " << endl;
		}
	} while (r <=0);

	Input(arr, r, c);
	Output(arr, r, c);
	cout << "Trung binh cong cua cac phan tu trong ma tran la: "<<setprecision(2)<<fixed<< TBC(arr, r, c) << endl;

	int x;
	cout << "Nhap gia tri can kiem tra: ";
	cin >> x;
	if (timX(arr, r, c,x)==true ) {
		cout << x << " co ton tai!"<<endl;
	}
	else {
		cout << x << " khong ton tai!" << endl;
	}
	system("pause");
	return 0;
}