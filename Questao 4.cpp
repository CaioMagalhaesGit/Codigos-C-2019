#include <stdlib.h>
#include <stdio.h>

struct aluno{
	int nota1;
	int nota2;
	int nota3;
	int media;
};

int main(){
	
	struct aluno a[10];
	float total = 0, mediageral=0,rec=0,apr=0;
	
	for(int i = 0; i < 10; i ++){
		
		printf("Digite a sua 1 nota");
		scanf("%d",&a[i].nota1);
		printf("Digite a sua 2 nota");
		scanf("%d",&a[i].nota2);
		printf("Digite a sua 3 nota");
		scanf("%d",&a[i].nota3);
	
		a[i].media = (a[i].nota1+a[i].nota2+a[i].nota3)/3;
		
		if(a[i].media < 60){
			rec++;
		}
		if(a[i].media >= 60){
			apr++;
		}
		
		printf("A media do aluno %d foi: %d \n", i+1,a[i].media);
		
	mediageral = a[i].media / 10;
	
	}
	printf("A media geral da turma e: %.2f \n",mediageral);
	printf("Os aprovados foram: %.0f \n",apr);
	printf("Os reprovados foram: %.0f \n",rec);
	system ("pause");
	return 0;
	

	
	
}



