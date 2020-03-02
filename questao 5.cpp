#include <stdio.h>
#include <stdlib.h>

struct pessoa
	{
	int idade ;
	int peso;
	char sexo;
	
	};
	
	int main(){

	struct pessoa a[10];
	int qtda = 0,qtdb = 0;
	
	
	for (int i=0 ; i <10 ; i++){
	
	printf("Digite o seu sexo (M/F):");
	scanf("%c",&a[i].sexo);
	printf("Digite a sua idade:");
	scanf("%d",&a[i].idade);
	printf("Digite o seu peso:");
	scanf("%d",&a[i].peso);
	
	if(a[i].sexo == 'M' || a[i].idade >= 20 && a[i].idade <= 30 || a[i].peso > 60){
		qtda++;
	}
	else if(a[i].sexo == 'F' || a[i].idade > 40 || a[i].peso < 70){
		qtdb++;
	}
	else{
		printf("Sexo digitado invalido.");
	}
}
	printf("Os homens que tem entre 20 e 30 e pesam mais de 60 kg são: %d \n",qtda);
	printf("As mulheres que são maiores de 40 e pesam menos de 70 kg são: %d \n",qtdb);
	
	system ("pause");
	return 0;
	
}
