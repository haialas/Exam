#include <stdio.h>
void reverseArray(int ary[], int n){
		for (int i=n; i>=0; i--){
		printf("%d \n", ary[i]);
	}
}

int main(){
	int i, n;
	printf("Nhap so phan tu:");
	scanf("%d", &n);
	
	int arr[n];
	for (i=0; i<n; i++){
		printf("Nhap so phan tu thu %d:", i);
		scanf("%d", &arr[i]);
	}
	reverseArray(arr, n);
}
