#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    printf ("%d\n",n);
    int s1,s2,s3,s4,s5,s6,s7;
    s1=n/100;
    n=n%100;
    s2=n/50;
    n=n%50;
    s3=n/20;
    n=n%20;
    s4=n/10;
    n=n%10;
    s5=n/5;
    n=n%5;
    s6=n/2;
    n=n%2;
    s7=n/1;
    printf ("%d nota(s) de R$ 100,00\n",s1);
    printf ("%d nota(s) de R$ 50,00\n",s2);
    printf ("%d nota(s) de R$ 20,00\n",s3);
    printf ("%d nota(s) de R$ 10,00\n",s4);
    printf ("%d nota(s) de R$ 5,00\n",s5);
    printf ("%d nota(s) de R$ 2,00\n",s6);
    printf ("%d nota(s) de R$ 1,00\n",s7);
    return 0;
} 
