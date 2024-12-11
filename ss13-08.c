#include <stdio.h>

int timUcln(int num1,int num2) {
	int ucln;
	int i;
	for(i=1;i<=num1&&i<=num2;i++) {
		if(num1%i==0&&num2%i==0) {
			ucln=i;
		}
	}
    return ucln;
}

int main()
{
	int num1=12;
	int num2=18;
	printf("UCLN cua %d va %d la:%d",num1,num2,timUcln(num1,num2));
	
	return 0;

 }

