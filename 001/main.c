#include <stdio.h>

int main(){
	// 1den 100e kadar olan sayýlarýn toplamýný bul
	
	int toplam, i;
	
	for(i = 0; i<=100; i++){
		toplam += i;
	}
	printf("%d",toplam);
}
