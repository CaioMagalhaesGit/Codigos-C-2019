#include <stdio.h>
#include <stdlib.h>

struct valores{
	int mega;
	int pessoa;
	
};

int main(){
	int ponto;
	struct valores a[6];
	for(int i=0 ; i<=6 ; i++){
		
		printf("Digite o digito da mega sena: \n");
		scanf("%d",&a[i].mega);
		printf("Digite o seu digito da mega sena: \n");
		scanf("%d",&a[i].pessoa);
		
		if(a[0].mega = a[0].pessoa){
			ponto ++;
		}
		else if(a[1].mega = a[1].pessoa){
			ponto ++;
		}
		else if(a[2].mega = a[2].pessoa){
			ponto ++;
		}
		else if(a[3].mega = a[3].pessoa){
			ponto ++;
		}
		else if(a[4].mega = a[4].pessoa){
			ponto ++;
		}
		else if(a[5].mega = a[5].pessoa){
			ponto ++;
		}
		else{
			ponto = 0;
		}
		
		
	}
	
	printf("Voce acertou %d",ponto,"pontos.");
	
	
	
	
	
	
	
	
	
	
}
