#include <stdio.h>

int main() {
    double   n;
    scanf("%lf",&n);
    int  s1,s2,s3,s4,s5,s6,k;
    int s7,c1,c2,c3,c4,c5;
    k=n*100;
    s1=k/10000;
    k=k%10000;
    s2=k/5000;
    k=k%5000;
    s3=k/2000;
    k=k%2000;
    s4=k/1000;
    k=k%1000;
    s5=k/500;
    k=k%500;
    s6=k/200;
    k=k%200;
    
    
    s7=k/100;
    k=k%100;
    c1=k/50;
    k=k%50;
    c2=k/25;
    k=k%25;
    c3=k/10;
    k=k%10;
    c4=k/5;
    k=k%5;
    c5=k/1;
    
    
    printf ("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n",s1);
    printf ("%d nota(s) de R$ 50.00\n",s2);
    printf ("%d nota(s) de R$ 20.00\n",s3);
    printf ("%d nota(s) de R$ 10.00\n",s4);
    printf ("%d nota(s) de R$ 5.00\n",s5);
    printf ("%d nota(s) de R$ 2.00\n",s6);
    printf ("MOEDAS:\n");
    printf ("%d moeda(s) de R$ 1.00\n",s7);
    printf ("%d moeda(s) de R$ 0.50\n",c1);
    printf ("%d moeda(s) de R$ 0.25\n",c2);
    printf ("%d moeda(s) de R$ 0.10\n",c3);
    printf ("%d moeda(s) de R$ 0.05\n",c4);
    printf ("%d moeda(s) de R$ 0.01\n",c5);
    return 0;
} 
