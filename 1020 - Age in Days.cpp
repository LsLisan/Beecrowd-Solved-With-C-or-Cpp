#include <stdio.h>

int main() {
    int d,m,y,ed;
    scanf("%d",&d);
    y=d/365;
    d=d%365;
    m=d/30;
    ed=d%30;
    printf ("%d ano(s)\n",y);
    printf ("%d mes(es)\n",m);
    printf ("%d dia(s)\n",ed);
    return 0;
}
