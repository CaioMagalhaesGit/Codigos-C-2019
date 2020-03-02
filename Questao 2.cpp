#include <stdio.h>
#include <stdlib.h>

struct pessoas{
	float peso;
	char sexo;
	int idade;
};

int main(){
	int entre60e80=0,maiorm=0,menorm=0,total=0;
	float mediam;
	struct pessoas a[9];
	for(int i = 0; i <= 10 ; i++){
		
		printf("Digite o seu sexo (M/F):");
		scanf("%c",&a[i].sexo);
		
		printf("Digite o seu peso:");
		scanf("%f",&a[i].peso);
		
		printf("Digite sua idade:");
		scanf("%d",&a[i].idade);
		
		if (a[i].sexo == 'F'|| a[i].peso >= 60 && a[i].peso <= 80 || a[i].idade >= 60 && a[i].idade <= 80){
					
			entre60e80++;
			
			
		total = total + a[i].peso;
}
		else if(a[i].sexo == 'F'|| a[i].peso > maiorm){
			maiorm = a[i].peso;
		}
		
		else if(a[i].sexo == 'F'|| a[i].peso < menorm){
			menorm = a[i].peso;
		}
		
		total = a[i].peso + total;
	}
	
	
	mediam = total/10;
	
	printf("As mulheres entre 60 e 80 são: %d \n",entre60e80);
	printf("A media do peso das mulheres é: %f \n",mediam);
	printf("O maior peso entre as mulheres é de: %d \n",maiorm);
	printf("O menor peso entre as mulheres é de: %d \n",menorm);	
	
	system ("pause");
	return 0;
}
