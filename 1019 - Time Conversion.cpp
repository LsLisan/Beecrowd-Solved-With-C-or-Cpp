#include <stdio.h>

int main() {
    int s,r,m,h;
    scanf("%d",&s);
    h=s/3600;
    s=s%3600;
    r=s/60;
    m=s%60;
    printf ("%d:%d:%d\n",h,r,m);
    return 0;
}
