#include<stdio.h>

int main(void)
{
    int p1,p2,unit1,unit2;
    float pp1,pp2,price1,price2,tp;
    scanf("%d%d%f",&p1,&unit1,&pp1);
    scanf("%d%d%f",&p2,&unit2,&pp2);
    price1=unit1*pp1;
    price2=unit2*pp2;
    tp=price1+price2;

    printf("VALOR A PAGAR: R$ %.2f\n",tp);

    return 0;
}
