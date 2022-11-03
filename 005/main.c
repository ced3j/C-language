#include <stdio.h>

int main(){
	// klavyeden girilen metnin uzunluðunu bul
	
	char metin [100];
	int adet = 0;
	
	printf("Metin girin: "); gets(metin);
	
	int i;
	for(i = 0; metin[i] != '\0'; i++){
		adet++;
	}
	
	
	int boyut = strlen(metin);
	
	printf("For ile metin boyutu: %d", adet);
	printf("Strlen ile boyut: %d", boyut);
	
	
	return 0;
		
}
