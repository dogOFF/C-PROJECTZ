#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int sn = 45; 
	int gs;
	int am = 5; 
	printf("Pick a number 1 - 50\n");
	scanf("%d", &gs);
	if(gs > 50|| gs < 0){
	printf("fuck you that isn't 1 - 50\nTry Again: ");
	scanf("%d", &gs);
}
	while(gs != sn && am > 0 ){
		printf("WRONG GUESS AGAIN\n");
		scanf("%d", &gs);
		am--;
	}
	if(am <= 0){
		printf("FUCK YOU YOU LOST YOU STUPID BITCH\n");
		system("pause");
		return 0;
	}
	printf("CONGRAT\n");
	system("pause");
	return 0; 

}