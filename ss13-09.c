#include <stdio.h>

void menu(int choose) {
	
	printf("\nMENU\n");
	printf("1.Nhap gia tri cac phan tu cua mang\n");
	printf("2.In gia tri cac phan tu cua mang theo ma tran\n");
	printf("3.In ra cac phan tu o goc theo ma tran\n");
	printf("4.In ra cac phan tu tren duong bien theo ma tran\n");
	printf("5.In ra cac phan tu nam tren duong cheo chinh va duong cheo phu cua ma tran\n");
	printf("6.In ra cac phan tu la so nguyen tto theo ma tran \n");
	printf("7.Thoat\n");
	
		
}

void mang(int arr[100][100],int n,int m) {
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			printf("Moi ban nhap gia tri cho arr[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}

int main()
{
	int choose,n,m;
	int arr[100][100];
	while(choose!=7) {
	menu(choose);
	printf("Moi ban nhap lua chon cua minh:");
	scanf("%d",&choose);
		
	switch(choose) {
		case 1://Nhap gia tri cac phan tu cua mang
		printf("Moi ban nhap so hang cho mang:");
		scanf("%d",&n);
		printf("Moi ban nhap so cot cho mang:");
		scanf("%d",&m);
		mang(arr,n,m);
		break;
		case 2://In gia tri cac phan tu cua mang theo ma tran
		for(int i=0;i<n;i++) {
		    for(int j=0;j<m;j++) {
				printf("%d\t",arr[i][j]);	
			}
			printf("\n");
		}
		break;
		case 3://In ra cac phan tu o goc theo ma tran
		
		
		
	
	
	
	
	}
	}
	return 0;

 }

