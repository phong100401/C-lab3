#include<stdio.h>

int main(){
	int tuoi,luong;
	char name[50];
	printf("Nhap ten: \n");
	scanf("%s",&name);
	printf("nhap so tuoi : \n");
	scanf("%d",&tuoi);
	printf("nhap so luong : \n");
	scanf("%d",&luong);
	printf("Tuoi cua %s la %d tuoi \n",name,tuoi);
	printf("Luong cua %s la %d VND \n",name,luong);
	return 0;
}
