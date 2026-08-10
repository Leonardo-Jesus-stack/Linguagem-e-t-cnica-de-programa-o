#include <stdlib.h>


int main() {
	float base, altura, area;
	
	printf("Insira o valor da BASE \n");
    scanf("%f", &base);
	printf("Insira  valor para a ALTURA \n");
	scanf("%f", &altura);
	area = (base*altura)/2;
	
	printf("A area do Triangulo = %0.2f", area);	
	
	return 0;
}
