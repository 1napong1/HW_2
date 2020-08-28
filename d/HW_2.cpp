#include<stdio.h>
int main() {
	float a;
	printf("Enter Weight(KG) : ");
	scanf_s("%f", &a);
	if (a < 0)
		printf("ERROR");
	else
	printf("%.2f Kilograms equals %.2f pounds", a, a / 0.45359);
	return 0;
}