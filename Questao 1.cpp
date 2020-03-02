#include <stdio.h>
#include <stdlib.h>

struct nota{
	int nota;
	int falta;

	};
	
	int main(){
		
	int maior90=0, menor70=0, maior, menor, total;
	float media;
	struct nota a[9];	
		
	for(int i=0; i < 10; i++ ){
	
	printf("Digite a sua nota final:");
	scanf("%d",&a[i].nota);
	printf("Digite suas faltas:");
	scanf("%d",&a[i].falta);
	if (a[i].nota >= 90){
		maior90++;
	}
	if (a[i].nota < 70 || a[i].falta >= 20){
		menor70++;
	}
	if (a[i].nota > maior){
		maior = a[i].nota;
	}
	if (a[i].nota < menor){
		menor = a[i].nota;
	}
	total = total + a[i].nota;
	}
	
	media= total/10;
	
	printf("Os alunos aprovados foram %d \n:", maior90);
	printf("Os alunos reprovados foram %d \n:", menor70);
	printf("A maior nota foi %d \n:", maior);
	printf("A menor nota foi %d \n:", menor);
	printf("A media das notas foi de %.2f \n:", media);
	
	system ("pause");
	return 0;
			
	}
