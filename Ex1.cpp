#include <stdio.h>
int main(){
	int i, n;
	float s=0;
	
	printf("Nhap so n: ");
	scanf("%d", &n);
	
	if(n<1){
		printf("Phai nhap n lon hon 1");
	}
	for (i=1; i<=n; i++){
		s += 1.0/i; 
	}
	printf("\n Tinh tong s: %f ", s);
	return 0;
}
