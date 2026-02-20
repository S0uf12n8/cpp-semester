#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int x,y;
	char c;
}spoint;


int main(){
	int i;
	spoint tab[3];
	
	for(i=0;i<3;i++){
		printf("\ndonner la valeur du tab[%d]=",i);
		scanf(" %c",&tab[i].c);
		printf("\ndonner la valeur du tab[%d]=",i);
		scanf("%d",&tab[i].y);
		printf("\ndonner la valeur du tab[%d]=",i);
		scanf("%d",&tab[i].x);
	}
	
	for(i=0;i<3;i++){
		printf("\n Point %c de coordonne:  %d %d ",tab[i].c,tab[i].x,tab[i].y);
	}
}
