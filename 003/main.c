#include <stdio.h>

int main(){
	// girilen n tane sayýnýn teklerini ve çiftlerini toplayan program
	
	int n, tekToplam = 0, ciftToplam = 0;
	printf("N degerini giriniz: ");
	scanf("%d", &n);
	
	int i;
	for(i = 0; i<n; i++){
		int sayi;
		printf("sayi: "); scanf("%d", &sayi);
		if(sayi%2==0){
			ciftToplam += sayi;
		}
		else{
			tekToplam += sayi;
		}
	}
	
	printf("cift sayilarin toplami = %d\ntek sayilarin toplami = %d",ciftToplam, tekToplam);
	
	return 0;
}
