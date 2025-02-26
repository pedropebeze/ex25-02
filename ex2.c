#include <stdio.h>

int main(){
	
	int n1, n2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	if(n1 > n2){
		printf("Maior: %d\n", n1);
		printf("Menor: %d", n2);
	}

	
	if(n1 < n2){
		printf("Maior: %d\n", n2);
		printf("Menor: %d", n1);
	}
	
	if(n1 == n2){
		printf("Iguais!");
	}
	return 0;
}
