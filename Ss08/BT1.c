#include<stdio.h>
int main(){
	int n;
	printf("nhap so phan tu trong mang: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	int max=a[0];
	int min=a[0];
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
		if(min>a[i]){
			min=a[i];
		}
	}
	printf("gia tri max min trong mang lan luot la %d va %d",max,min);
}
