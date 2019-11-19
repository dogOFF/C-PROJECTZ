#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define poop printf
int main(){
	int sn = 45; 
	int gs = 0;
	int am = 5;
	while(gs != sn && am > 0 ){
		poop("GUESS NUMBER 1 - 50: \n%d GUESSES LEFT\n", am );
		scanf("%d", &gs);
	if(gs > 50 || gs < 0){
		poop("NOT 1-50 IDIOT\n");
	}else{
		am--;
	}
}
	if(am <= 0){
		poop("FUCK YOU YOU LOST YOU STUPID BITCH\n");
		system("pause");
		return 0;
	}
	poop("CONGRAT\n");
	system("pause");
	return 0; 
}