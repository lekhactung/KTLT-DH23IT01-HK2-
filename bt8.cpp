#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int Max_R = 50, MAX_C = 50;

void Input(int arr[][MAX_C], int d) {
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			arr[i][j] = rand()%20;
		}
	}
}
void Output(int arr[][MAX_C], int d) {
	cout << "Cac phan tu dang luu trong mang la:  " << endl;
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void Tong(int arr[][MAX_C],int d){
	int sum=0;
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			sum += arr[i][j];
		}
	}
	cout << "Tong cua ma tran la: " <<sum<< endl;	
}
void Tich(int arr[][MAX_C], int d) {
	int tich = 0;
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			tich *= arr[i][j];
		}
	}
	cout << "Tich cua ma tran la: " << tich << endl;
}
int main(){
	srand(time(NULL));
	int arr[Max_R][MAX_C];
	int d;
	do {
		cout << "Nhap chieu dai ma tran: ";
		cin >> d;
		if (d <= 0) {
			cout << "Vui long nhap lai! " << endl;
		}
	} while (d <= 0);
	Input(arr, d);
	Output(arr,d);
	Tong(arr, d);
	Tich(arr, d);
	system("pause");
	return 0;
}