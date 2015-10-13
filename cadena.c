#include  <stdio.h>

//char   cadena [10] = {"Hola Mundo"};
//int    arreglo[10] = {0,1,2,3,4,5,6,7,8,9};
//char  *cadena1     = "Hola Mundo mas largo";
char  *meses [8]  = {"enero","febrero","marzo","abril","mayo","junio","julio","agosto"};
int    i,j;

char *aux;

int main ()

{
	for(i=0;i<8;i++){
		j=0;
		aux = meses[i];
	while(*(aux+j) != '\0'){	
		j++;
}
//		for (i=0;i<8;i++){	
//		if(*meses != '\0'  ){	
		printf("  %c  ",*(aux+j-3));
		printf(" %c  ",*(aux+j-2));
		printf(" %c  ",*(aux+j-1));
		printf("\n");
			
		}
	}	


