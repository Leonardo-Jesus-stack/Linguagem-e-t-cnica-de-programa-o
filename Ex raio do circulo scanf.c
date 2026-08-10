#include <stdio.h>


int main() {
	float raio, area;
	
	printf("Insira o raio \n");
    scanf("%f", &raio);

	area = (3.14159*raio*raio);
	
	printf("area = %.3f", area);	
	
	return 0;
}
