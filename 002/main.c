#include <stdio.h>

int main(){
	// Kullan�c�dan al�nan 3 say�dan en b�y�k ve en k����� bulma
	
	int a, b, c, B, K;
	printf("3 adet sayi giriniz: \n");
	scanf("%d\n %d\n %d,", &a, &b, &c);
	
	B = ((a > b) && (a > c)) ? a: ((b > a)  && (b > c)) ? b: c;
	K = ((a < b) && (a < c)) ? a: ((b < a)  && (b < c)) ? b: c;
	
	printf("Buyuk sayi %d\n Kucuk sayi %d", B, K);
	
	
}
