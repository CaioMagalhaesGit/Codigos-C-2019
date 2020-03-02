#include <stdio.h>
#include <stdlib.h>

struct pesos{
	int peso;
};

int main(){
	
	int pesoe,pessoas,total;
	struct pesos a[pessoas];
	
	printf("Digite a capacidade do elevador em kg:");
	scanf("%d",&pesoe);
	printf("Digite a quantidade de pessoas:");
	scanf("%d",&pessoas);
	
	for(int i = 0; i < pessoas ; i++){
		
		printf("Digite o seu peso:");
		scanf("%d",&a[pessoas].peso);
		
		
		total = a[pessoas].peso + total;	
		
		if(total > pesoe){
			printf("Limite maximo de peso");
		}
			
	}
	printf("O peso total e de: %d \n",total);
	printf("O elevador possui %d pessoa(s) \n",pessoas);
	
	system ("pause");
	return 0;
	
	
}


