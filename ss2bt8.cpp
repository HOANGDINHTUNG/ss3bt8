#include<stdio.h>
int main(){
	int n, rev=0;
	printf("moi nhap vao n : ");
	scanf("%d",&n);
	while(n>0){
		rev=rev*10+n%10;
		n=n/10;
		
	}
	printf("so dao nguoc cua n la rev = %d",rev);
	return 0;
}
