#include<stdio.h>

int main(void)
{
    double r,pi=3.14159,v;
    scanf("%lf",&r);
    v=(4/3.0)*pi*(r*r*r);
    printf("VOLUME = %.3lf\n",v);

    return 0;
}
