#include <stdbool.h>
#include <stdio.h>
bool je_sude(int cislo){
	if(cislo %2 == 0){
	return true;
	}else{
		return false;
		}
}
int main(void){
	printf("Zadej číslo: ");
	int i=0;
	scanf("%d",&i);
	for(int j=0; j<10; j++) {
		printf('%d', j);
        }
	if(je_sude(i) == true){
		printf("Tvé číslo je sudé.\n");
		}else{
		printf("Tvé číslo je liché.\n");
		}
	return 0;
}
