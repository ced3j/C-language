#include <stdio.h>

int main(){
	// 1den 100e kadar olan say�lar�n toplam�n� bul
	
	int toplam, i;
	
	for(i = 0; i<=100; i++){
		toplam += i;
	}
	printf("%d",toplam);
}
