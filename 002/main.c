#include <stdio.h>

int main(){
	// Kullanýcýdan alýnan 3 sayýdan en büyük ve en küçüðü bulma
	
	int a, b, c, B, K;
	printf("3 adet sayi giriniz: \n");
	scanf("%d\n %d\n %d,", &a, &b, &c);
	
	B = ((a > b) && (a > c)) ? a: ((b > a)  && (b > c)) ? b: c;
	K = ((a < b) && (a < c)) ? a: ((b < a)  && (b < c)) ? b: c;
	
	printf("Buyuk sayi %d\n Kucuk sayi %d", B, K);
	
	
}
