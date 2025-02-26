#include <stdio.h>

int main(){
	
	int n1;
	
	printf("Digite um numero: ");
  	scanf("%d", &n1);
  	
  	if(n1 % 2 == 0){
  		printf("Par");
	  }
	  
	  if(n1 % 2 == 1){
  		printf("Impar");
	  }
	
	return 0;
}
