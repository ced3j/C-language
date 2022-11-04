#include <stdio.h>

int main(){
	// dizideki elemanlarý sýralama
	
	int dizi[] = {3,53,152,7,9,0,39,111,10,99};
	int i, j;
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < i; j++){
			if(dizi[i] < dizi[j]){
				int gecici = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = gecici;
				
			}
		}
	}
	
	int x;
	for(x = 0; x < 10; x++){
		printf(" %d ", dizi[x]);
	}
	
	
	return 0;
}
