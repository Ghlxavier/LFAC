#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char X[10];
	char Y[10];
	
	strcpy(X, "001");					 //Copia uma string da outra	
	strcpy(Y, "101");
	
	strcat(X, Y);				//Concatenar x e y, e armazena o resultado em X
	
	printf("%s", X);
	
		return 1;
}

