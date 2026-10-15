#include<bits/stdc++.h>
using namespace std;


void insertion(int arr[], int n) {
	for(int i=1; i<=n-1; i++) {
		int j = i;
		while(j>0 && arr[j-1] > arr[j]) {
			swap(arr[j-1],arr[j]);
			j--;
		}
	}
}

void printarr(int arr[], int n) {
	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}
}

int main() {
	int arr[] = {9, 1, 3, 2, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	insertion(arr, n);
	printarr(arr, n);
	return 0;
}
