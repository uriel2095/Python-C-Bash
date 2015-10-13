#include<stdio.h>

int variable;
float arreglo [5];
float leer;
int contador;
int i;

int  main()
{
	printf("Hola Mundo \n");
	printf("Dame un numero : \n");
	scanf("%d",&variable);
	printf("el numero recibido es %d \n ", variable);
	scanf("%f",&leer);
	arreglo[0] = leer;
	printf("El valor de la flotante es %.1f \n",arreglo[0]);
	if(variable > 10)
	{
		printf("Mayor que 10\n");
	}
	else
	{
		printf("Menos que 10\n");
	}	
	while(contador < 10)
	{
		printf("El contador es : %d \n",contador);
		contador++;
	}
	for(i=0;i<10;i++)
	{
		printf("Ciclo for: %d \n",i);
	}	
	return 0;
}
