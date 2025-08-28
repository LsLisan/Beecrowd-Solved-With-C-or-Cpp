#include <stdio.h>

int main() {
    float a,b,c,tr,cr,tp,sq,r;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    tr=0.5*a*c;
    cr=3.14159*c*c;
    tp=0.5*(a+b)*c;
    sq=b*b;
    r=a*b;
    printf ("TRIANGULO: %.3f\n",tr);
    printf ("CIRCULO: %.3f\n",cr);
    printf ("TRAPEZIO: %.3f\n",tp);
    printf ("QUADRADO: %.3f\n",sq);
    printf ("RETANGULO: %.3f\n",r);
    return 0;
}
