#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//Calculadora


// Soma
int  soma( float s1,  float s2 ){
	
	return s1+s2;
}

//Multiplica��o
 int  multiplicar( float m1, float m2 ){
	
	
	return m1*m2;
	
}
// Divis�o
int Divisao( float d1, float d2){
	
	return d1/d2;
}
//Subtra��o
int Subtracao ( float sub1, float sub2){
	
	
	return sub1-sub2;
}

//Porcetagem
int calcularPorcentagem(float valor, float porcentagem){
    float resultado = valor * (porcentagem/100);
	printf("%.2f%% de %.2f � igual a %.2f\n", porcentagem, valor, resultado);
}
	
//IMC
int calcularIMC(float peso, float altura){
    float imc = peso / (altura * altura);
    return imc;
}


int main (){
	setlocale(LC_ALL,"portuguese");
	void menu ();
	
	int opcao;

	
	printf("=====Calculadora=====\n");
do{

	menu();
	printf("Digite sua op��o de Calculor..:");
	scanf("%d",&opcao);
	
	switch(opcao){
	case 0: printf("Saindo do programa");
	break;
	case 1:
		 resultSoma();
	break;
	case 2:
		
		resultMultiplicacao();
	break;
	case 3:
		resultDivisao();
	break;	
	case 4:
		resultSubtracao();
		
		break;
	case 5:
		resultPorcetagem();
		break;
	case 6:
		resultIMC();
		break;
	
} 
}while(opcao != 0);
	printf(" \nOp��o invalida!!!");
	return 0;
}
void menu(void){
    printf("\nMENU:\n");
    printf("1. Somar\n");
    printf("2. Multiplicar\n");
    printf("3. Divide \n");
    printf("4. Subtra��o\n");
    printf("5. Porcetagem\n");
    printf("6. IMC \n");
    printf("0. Sair\n");
}


int  resultSoma(){
	int S1 =0;
	int S2 =0;
	
	printf("Digite o primeiro valor..: \n");
	scanf("%d", &S1);
	printf("Digite o segundo numero..: ");
	scanf("%d", &S2);
	
	printf("Resultado da Soma..: %d", soma(S1,S2));
	
}
int resultMultiplicacao(){
	int M1 =0;
	int M2=0;
	
	printf("Digite o primeiro valor..: \n");
	scanf("%d", &M1);
	printf("Digite o segundo numero..:");
	scanf("%d", &M2);
	printf("Resultado da Multiplica��o..: %d",multiplicar(M1,M2));
}
int resultDivisao(){
	int D1=0;
	int D2=0;
	
	printf("Digite o primeiro valor..:");
	scanf("%d", &D1);
	printf("Digite o segundo numero..:");
	scanf("%d", &D2);
	printf("Resultado da Divis�o..: %d", Divisao(D1,D2)) ;
	
}

int resultSubtracao(){
	int SUB1 =0;
	int SUB2=0;
	
	printf("Digite o primeiro valor..:");
	scanf("%d", &SUB1);
	printf("Digite o segundo numero..:");
	scanf("%d", &SUB2);
	printf("Resultado da Subtra��o..: %d",Subtracao(SUB1,SUB2));	
}




int resultPorcetagem(){
	
float valor, porcentagem;
    printf("Informe o valor: ");
    scanf("%f", &valor);
    printf("Informe a porcentagem: ");
    scanf("%f", &porcentagem);
    calcularPorcentagem(valor, porcentagem);
	
}


int resultIMC(){
	
	float peso, altura, imc;
    printf("Informe o peso em kg: ");
    scanf("%f", &peso);
    printf("Informe a altura em metros: ");
    scanf("%f", &altura);
    
    imc = calcularIMC(peso, altura);
    
    printf("Seu IMC �: %.2f\n", imc);
    return 0;
	
}


