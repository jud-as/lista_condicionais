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
	float mg, sp, rj, ms, valor;
	char estado[2];
	
	printf("Estado de destino: ");
	scanf("%s", &estado);
	printf("Valor: ");
	scanf("%f", &valor);

	if(strcmp(estado, "MG") == 0 )
	{
		mg = valor + (valor * 0.07);
		printf("Valor: %.1f", mg);
	} 
	if(strcmp(estado, "SP") == 0 )
	{
		sp = valor + (valor * 0.12);
		printf("Valor: %.1f", sp);
	}
	if(strcmp(estado, "MS") == 0)
	{
		ms = valor + (valor * 0.08);
		printf("Valor: %.1f", ms); 
	}
	if(strcmp(estado, "RJ") == 0)
	{
		rj = valor + (valor * 0.15);
		printf("Valor: %.1f", rj);
	}
	else
	{
		printf("Estado n identificado");
	}
	
}

void exercicioNove()
{
	int idade;
	printf("Idade Nadador: ");
	scanf("%d", &idade);

	if (idade >=5 && idade<=7)
	{
		printf("Categoria Infantil A");
	} 
	else if (idade >=8 && idade <= 10)
	{
		printf("Categoria Infantil B");
	}
	else if (idade >=11 && idade <=13)
	{
		printf("Cateforia Juvenil A");
	}
	else if (idade >= 14 &&  idade <= 17)
	{
		printf("Cateforia Juvenil B");
	}
	else if (idade > 18)
	{
		printf("Senior");
	}


}

void exercicioDez()
{
	int media, n1, n2, n3;
	
	printf("Media Geometrica (1)\nMedia Ponderada (2)\nMedia Harmonica (3)\nMedia Aritmetica (4)\nEscolha: ");
	scanf("%d", &media);

	printf("valor X: \n");
	scanf("%d", &n1);
	printf("Valor Y: \n");
	scanf("%d", &n2);
	printf("Valor Z: \n");
	scanf("%d", &n3);

	switch (media)
	{
		case 1:
		printf("A media Geometrica eh: %d", n1*n2*n3);
		break;
		case 2:
		printf("A media Ponderada eh: %d", (n1 + (2*n2) + (3*n3))/6);
		break;
		case 3:
		printf("A media Harmonica eh: %d", ((1/n1) + (1/n2) + (1/n3))/1);
		break;
		case 4:
		printf("A media Aritimetica eh: %d", (n1 + n2 + n3)/3);
		default:
		printf("Numero Invalido");
		break;
	}

}

void exercicioOnze()
{
	float x, y;

	printf("De as coordenadas de x e y, respectivamente: \n");
	scanf("%f", &x);scanf("%f", &y);
	if(x == 0 && y == 0)
	{
		printf("Origem");
	} else if ( x > 0 && y > 0) {
		printf("Quadrante 1");
	} else if ( x > 0 && y < 0) {
		printf("Quadrante 4");
	} else if ( x < 0 && y > 0) {
		printf("Quadrante 2");
	} else if ( x < 0 && y < 0) {
		printf("Quadrante 3");  
	} else if ( x == 0 && y < 0 || x == 0 && y > 0) {
		printf("Eixo Y");
	} else if ( x > 0 && y == 0 || x < 0 && y == 0) {
		printf("Eixo X");
	} 

}

void exercicioDoze()
{
	int mes;
	mes = 0;
	printf("Escolha o mes: ");
	scanf("%d", &mes);
	switch (mes)
	{
	case 1:
	printf("Janeiro");
	break;
	case 2:
	printf("Fevereiro");
	break;
	case 3:
	printf("Marco");
	break;
	case 4:
	printf("Abril");
	break;
	case 5:
	printf("Maio");
	break;
	case 6:
	printf("Junho");
	break;
	case 7:
	printf("Julho");
	break;
	case 8:
	printf("Agosto");
	break;
	case 9:
	printf("Setembro");
	break;
	case 10:
	printf("Outubro");
	break;
	case 11:
	printf("Novembro");
	break;
	case 12:
	printf("Dezembro");
	break;
	default:
	printf("Inexistente");
	break;
	}
}

void exercicioTreze()
{
	// n consegui
}

void exercicioQuatorze()
{
	int dia;
	printf("Informe o dia da semana: ");
	scanf("%d", &dia);

	switch (dia)
	{
	case 1:
	printf("Segunda");
	break;
	case 2:
	printf("Terca");
	break;
	case 3:
	printf("Quatrta");
	break;
	case 4:
	printf("Quinta");
	break;
	case 5:
	printf("Sexta");
	break;
	case 6:
	printf("Sabado");
	break;
	case 7:
	printf("Domingo");
	break;
	default:
	printf("Inexistente");
	break;
	}
}

void exercicioQuinze()
{
	int ddd;
	printf("DDD: ");
	scanf("%d", &ddd);
	switch (ddd)
	{
	case 61:
	printf("Brasilia");
	break;
	case 71:
	printf("Salvador");
	break;
	case 11:
	printf("Sao Paulo");
	break;
	case 21:
	printf("Rio de Janeiro");
	break;
	case 32:
	printf("Juiz de Fora");
	break;
	case 19:
	printf("Campinas");
	break;
	case 27:
	printf("Vitoria");
	break;
	case 31:
	printf("Belo Horizonte");
	break;
	default:
	printf("uma cidade no Brasil sem identificacao");
	break;
	}


}

void exercicioDezesseis()
{	
	float  n1, n2;
	int operacoes;

	printf("ESCOLHA\nSOMA (1)\nSUBTRACAO (2)\nMULTIPLICACAO (3)\nDIVISAO (4)\n");
	scanf("%d", &operacoes);
	printf("Escolha dois valores:\n");
	scanf("%f%f", &n1, &n2);


	switch (operacoes)
	{
	case 1:
	printf("Soma: %.1f\n", n1 + n2);
	break;
	case 2:
	printf("Subtracao: %.1f\n", n1 - n2);
	break;
	case 3:
	printf("Multiplicacai: %.1f\n", n1 * n2);
	break;
	case 4:
	printf("Divisao: %.1f\n", n1 / n2);
	break;
	default:
	printf("Invalido");
	break;
	}



}

void exercicioDezessete()
{
	int n;
	printf("Escolha o numero: ");
	scanf("%d", &n);

	if(n%3 == 0 && n%5 == 0)
	{
		printf("Nao verificado.\n");
	} 
	else if (n%3 == 0 || n%5 == 0)
	{
		printf("Verificado.");
	}
	
	
}

void exercicioDezoito()
{
	double valor;
	int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n1 = 0,
	m50 = 0, m25 = 0, m10 = 0, m5 = 0, m01 = 0;

	printf("Valor Monetario: ");
	scanf("%lf", &valor);

	if ( valor / 100 >= 1 )
	{
		do
		{

			n100 = n100 + 1;
			valor = valor - 100;

		} while (valor / 100 >= 1 );	

	}
	if ( valor / 50 >= 1 )
	{
		do
		{	

			n50 = n50 + 1;
			valor = valor - 50;

		} while ( valor / 50 >= 1 );
			
	}
	if ( valor / 20 >= 1 )
	{
		do
		{
			
			n20 = n20 + 1;
			valor = valor - 20;

		} while ( valor / 20 >= 1);
		
	}
	if ( valor / 10  >= 1 )
	{
		do
		{
			
			n10 = n10 + 1;
			valor = valor - 10;

		} while ( valor / 10  >= 1 );
		
	}

	//VALORES ABAIXO DE 10:

	if ( valor < 10 && valor >=1 )
	{
		do
		{
			n1 = n1 + 1;
			valor = valor - 1;

		} while ( valor < 10 && valor >=1 );
		
	}
	
	if ( valor < 1 && valor >= 0.50 )
	{
		do
		{
			m50 = m50 + 1;
			valor = valor - 0.50;
		} while ( valor < 1 && valor >= 0.50 );
	
	}

	if ( valor < 0.5 && valor >= 0.25 )
	{
		do
		{
			m25 = m25 + 1;
			valor = valor - 0.25;
		} while ( valor < 0.5 && valor >= 0.25 );
	
	}

	if ( valor < 0.25 && valor >= 0.10 )
	{
		do
		{
			m10 = m10 + 1;
			valor = valor - 0.10;
		} while ( valor < 0.25 && valor >= 0.10 );
	
	}
	
	if ( valor < 0.10 && valor >= 0.05 )
	{
		do
		{
			m5 = m5 + 1;
			valor = valor - 0.05;
		} while ( valor < 0.10 && valor >= 0.05 );
	
	}

	if ( valor < 0.05 && valor >= 0.01 )
	{
		do
		{
			m01 = m01 + 1;
			valor = valor - 0.01;
		} while ( valor < 0.05 && valor > 0.0 );
	
	}
	
	
	

	printf("Notas de 100: %d\nNotas de 50: %d\nNotas de 20: %d\nNotas de 10: %d\nMoedas de 1: %d\nMoedas de 0.50: %d\nMoedas de 0.25: %d\nMoedas de 0.10: %d\nMoedas de 0.05: %d\nMoedas de 0.01: %d" 
	,n100, n50, n20, n10, 
	n1, m50, m25, m10, m5, m01);

}

void exercicioDezenove()
{
	float N1, N2, N3 ,N4, nExame, media, mFinal;
	int exame = 0;

	printf("Nota 1, Nota 2, Nota 3 e Nota 4, respectivamente: \n");
	scanf("%f%f%f%f", &N1, &N2, &N3, &N4);
	N1 = N1 * 2; N2 = N2 * 3; N3 = N3 * 4; N4 = N4 * 1;
	media = (N1 + N2 + N3 + N4) / 10;
	printf ("Media: %.1f\n", media);
	if ( media >= 7.0 )
	{
		printf("Aluno aprovado.");
	} 
	if ( media <= 4.9 )
	{
		printf("Aluno reprovado.");
	}
	if ( media >= 5 && media < 7 )
	{
		printf("Aluno em exame.");
		exame = 1;
	}
	
	if ( exame == 1 )
	{
		printf("\nNota Obtida: ");
		scanf("%f", &nExame);
		printf("\nNota do Exame: %.1f ", nExame);
		mFinal = ( media + nExame ) / 2; 

		if ( mFinal >= 5 )
		{
			printf("\n\nAluno aprovado.");

		} else 
		{
			printf("\n\nAluno reprovado.");
		}
	}
	
	
	
}

void exercicioVinte()
{
	int cA, cB, cC, delta, x1, x2;

	printf("ax2 + bx + c = 0 \n");
	printf("a = "); scanf("%d", &cA);
	printf("b = "); scanf("%d", &cB);
	printf("c = "); scanf("%d", &cC);

	system("cls");

	printf("%dx2 + %dx + %d = 0 \n", cA, cB, cC);

	if ( cA != 0 )
	{
		delta = pow(cA, 2) - 4 * cA * cC ;
		if ( delta < 0 )
		{
			printf("Nao existe raiz.");
		}
		else if ( delta == 0 )
		{	
			x1 = -cB / (2 * cA);
			printf("Raiz unica.\nx: %d", x1);	
		}

		else if ( delta > 0 ) 
		{
			x1 = (-cB + sqrt(delta)) / (2 * cA);
			x2 = (-cB - sqrt(delta)) / (2 * cA);
			printf("x1: %d\nx2: %d", x1 , x2 );
		}			
	}		

		
	else
	{
		printf("Nao eh equacao de 2 grau.");
	}
	

}


int main()
{
	exercicioVinte();	
	return 0;
}
