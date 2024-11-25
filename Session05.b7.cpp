#include<stdio.h>

int main() {
	int a,b;
	printf("Moi ban nhap vao 2 so nguyen duong : \n");
	scanf("%d %d",&a,&b);	
	for(int i = 2;;i++) {
		if(i%a==0 && i%b==0) {
			printf("BCNN cua %d va %d la : %d",a,b,i);
			break;	
		}
	}
}
  
