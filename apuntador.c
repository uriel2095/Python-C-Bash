#include<stdio.h>

//int variable;
//int *apuntador;


void suma(int *a,int *b,int *resultado)
{
	*resultado = *a+*b;
	*a = 3;
	*b = 4;
	return ;	
}
int main()
{
	//variable = 1;
	//apuntador = &variable;
	//*apuntador = 5;
	//apuntador = 0;
	int a,b,c;
	a=1;
	b=2;
	c=0;
	suma(&a,&b,&c);
	printf("\n el resultado es  : %d %d %d \n",c, a,b);
}
