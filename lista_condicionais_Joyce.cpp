#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void exercicioUm()
{
	float n1, n2;
	
	printf("Digite dois numeros: ");
	scanf("%f%f", &n1, &n2);
	
	if(n1 > n2 ? printf("%f eh maior", n1) : printf("%f eh maior", n2));
}

void exercicioDois()
{
	float n1, n2;
	
	printf("Digite dois numeros: ");
	scanf("%f%f", &n1, &n2);
	
	if(n1==n2){
		printf("Numeros iguais");
	} else {
		if (n1 > n2 ? printf("%f eh o numero maior", n1) : printf("%f eh o numero maior", n2));
	}

	
}

void exercicioTres()
{
	int n1;
	printf("Escolha um numero: ");
	scanf("%d", &n1);
	
	if(n1%2 == 0 ? printf("Esse numero eh par") : printf("Esse numero eh impar"));
}

void exercicioQuatro()
{
	float salario, prestacao, porcentagem;
	
	printf("Salario: \nPrestacao: \n\n");
	scanf("%f%f", &salario, &prestacao);
	
	porcentagem = 0.2*salario;
	if(prestacao > porcentagem ? printf("emprestimo n�o concedido") : printf("empr�stimo concedido"));
}

void exercicioCinco()
{
	int numero, potencia, raiz;
	
	printf("Numero: ");
	scanf("%d", &numero);
	
	if(numero > 0){
		
		raiz = sqrt(numero);
		potencia = pow(numero,2);
		printf("Potencia: %d \n", potencia);
		printf("Raiz: %d", raiz);
			
				
	} else {
		printf("Numero invalido :(");
	}

	
	
	
	
}

void exercicioSeis()
{
	float altura;
	char sexo;
	float peso;
	float pesoIdealMulher, pesoIdealHomem;
	
	printf("Altura em metro: ");
	scanf("%f", &altura);
	printf("Sexo(H/M): ");     											
	scanf(" %c", &sexo);
	
	pesoIdealHomem = (72.2*altura)-58; 
	pesoIdealMulher = (62.1*altura)-44.7;     
	
	switch (sexo) 												
	{
		case 'H':
			printf("%f", pesoIdealHomem);
		break;
		
		case 'M':
			printf("%f", pesoIdealMulher);
		break;
		
		default:
			printf("Belle Belinha? :O");
	}
}

void exercicioSete()
{
	int A, B, C, D, somaCD, somaAB;
	
	printf("Valor A: \nValor B: \nValor C: \nValor D: \n\n");
	scanf("%d%d%d%d", &A,&B,&C,&D);
	
	somaCD = C+D;
	somaAB = A+B;
	
	if(B>C){
		if(D>A){
			if(somaCD > somaAB){
				if(C > 0 && D > 0){
					if(A%2==0){
						printf("Valores Aceitos :)");
					}
				}
			}
		}
	} else {
		printf("Valores nao aceitos");
	}
}

void exercicioOito()
{
	float porcentagem, valor;
	char estado[2];
	
	printf("Estado de destino: ");
	scanf("%s", &estado);
	printf("Valor: ");
	scanf("%f", &valor);
	

}
int main()
{
	exercicioOito();
	return 0;
}
