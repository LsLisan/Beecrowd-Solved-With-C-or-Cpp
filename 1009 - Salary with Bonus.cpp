#include <stdio.h>

int main() {
    char a[8];
    double s ,b;
    gets(a);
    scanf ("%lf %lf",&s,&b);
    b=(b*15)/100;
    s=s+b;
    printf ("TOTAL = R$ %.2lf\n",s);
    return 0;
}
