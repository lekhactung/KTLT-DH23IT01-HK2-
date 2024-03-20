#include <iostream>
using namespace std;
const int MAX_R = 50, MAX_C = 50;
void Input(int arr[][MAX_C], int r, int c) {
	cout << "Nhap cac phan tu trong mang " << endl;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> arr[i][j];
		}
	}
}

void Sum(int arr[][MAX_C],int r, int c){
	int choice;
	cout << "Ban muon tinh theo hang hang(1) hay tinh theo cot (2)";
	do{ 
		cin >> choice;
		if (choice != 1 && choice != 2) {
			cout << "Vui long nhap lai";
		}
	} while (choice != 1 && choice != 2);
	switch (choice)
	{
	case 1: {
		int tmp; int sum = 0;
		cout << "Nhap thu tu hang can tinh : ";
		cin >> tmp;
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				if (i+1 == tmp) {
					sum += arr[i][j];
				}
			}
		}
		cout << "Tong phan tu trong hang " << tmp << " la " << sum << endl;
		break;
	}
	case 2: {
		int tmp; int sum = 0;
		cout << "Nhap thu tu cot can tinh : ";
		cin >> tmp;
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				if (j + 1 == tmp) {
					sum += arr[i][j];
				}
			}
		}
		cout << "Tong phan tu trong cot " << tmp << " la " << sum << endl;
		break;
	}
	default:
		break;
	}
}

void timX(int arr[][MAX_C], int r, int c){
	int x;
	cout << "Nhap gia tri can tim" << endl;
	cin >> x;
	int cnt = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (arr[i][j] == x) {
				cnt++;
			}
		}
	}
	cout << "Gia tri X ton tai " << cnt << " lan" << endl;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (arr[i][j] == x) {
				cout << "Tai hang thu " << i+1 << ", Cot thu " << j+1 << endl;
			}
		}
	}
}
int main() {
	int arr[MAX_R][MAX_C];
	int r, c;
	do {
		cout << "Nhap so hang va so cot: ";
		cin >> r >> c;
		if (r > 5 || c > 6) {
			cout << "Vui long nhap lai! " << endl;
		}
	} while (r > 5 || c > 6);
	Input(arr, r, c);
	Sum(arr, r, c);
	timX(arr, r, c);
	system("pause");
	return 0;
}