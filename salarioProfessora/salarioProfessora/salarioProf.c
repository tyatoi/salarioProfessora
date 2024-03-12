#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	float h = 0.0, v = 0.0, d = 0.0, s = 0.0, sd = 0.0;
	printf("Quantas horas mensais voce trabalha? \n");
	scanf("%f", &h);
	printf("Qual o valor da sua hora-aula? \n");
	scanf("%f", &v);
	printf("Qual a porcentagem de desconto do seu salario? (escreva apenas o numero, sem o sinal de porcentagem) \n");
	scanf("%f", &d);
	s = h * v;
	sd = (s * d) / 100;
	s = s - sd;
	printf("Seu salario: %.2f\n", s);
	return 0;

}

