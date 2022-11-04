#include <stdio.h>


int main(){
	// girilen metni tersten yazan program
	
	char metin[100];
	
	printf("Bir metin girin: "); gets(metin);
	
	
	int i;
	for(i = 0; i < strlen(metin); i++){
		printf("%c", metin[strlen(metin)-i-1]);
	}
	
	
	return 0;
}
