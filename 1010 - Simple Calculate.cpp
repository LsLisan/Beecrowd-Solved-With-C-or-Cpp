#include <stdio.h>

int main() {
    int c,u;
    int c1,u1;
    float p ,p1,v,v1,vtp;
    scanf("%d %d %f",&c,&u,&p);
    scanf("%d %d %f",&c1,&u1,&p1);
    v=u*p;
    v1=u1*p1;
    vtp=v+v1;
    printf ("VALOR A PAGAR: R$ %.2f\n",vtp);
    return 0;
}
