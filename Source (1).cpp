#include "Header (1).h"
void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}
void xuat(int a[], int n) {
	cout << "\nCac so chan la: ";
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			cout << a[i];
		}
	}
}

