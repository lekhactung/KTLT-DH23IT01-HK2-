#include <iostream>
using namespace std;
const int MAX_R = 4, MAX_C = 3;
int main() {
	int arr[MAX_R][MAX_C];
	int i = 0,  j = 0;
	while (i < MAX_R) {
		while (j < MAX_C) {
			cin >> arr[i][j];
			j++;
		}
		j = 0;
		i++;
	}
	cout << "Gia tri cua mang vua nhap la: " << endl;
	i = 0;
	while (i < MAX_R) {
		while (j < MAX_C) {
			cout << arr[i][j]<< " ";
			j++;
		}
		j = 0;
		cout << endl;
		i++;
	}
	system("pause");
	return 0;
}