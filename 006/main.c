#include <stdio.h>

int main(){
	// bir karakter ve say� girilince girilen say� kadar karakter yaz
	
	char karakter;
	int sayi;
	printf("Karakter giriniz: "); scanf("%c", &karakter);
	printf("Sayi giriniz: "); scanf("%d", &sayi);
	
	int i;
	for(i = 0; i<sayi; i++){
		printf("%c", karakter);
	}
	
	return 0;
}
