#include <stdio.h>

int main(){
	
	// klavyeden girilen metnin i�inden, klavyeden girilen bir karakterin ka� kez ge�ti�ini bulal�m
	
	char metin[100];
	char ch;
	int adet = 0;
	
	printf("Metin giriniz: "); gets(metin); 
	printf("Karakter giriniz: "); scanf("%c", &ch);
	
	int i;
	for(i=0; metin[i] != '\0'; i++){
		
		if(metin[i] == ch){
			adet++;
		}
	}
	
	printf("%c harfinden %d adet var", ch, adet);
	
	
	return 0;
	
}
