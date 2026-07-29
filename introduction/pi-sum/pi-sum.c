#include <stdio.h>
#include <math.h>

float PI = 3.141592;

int main(void){
    float r;
    double area;

    printf("Introduzca el radio del circulo: ");
    scanf("%f", &r);

    area = PI * pow(r, 2);
    printf("El area del circulo es: %lf", area);
    return 0;
}
