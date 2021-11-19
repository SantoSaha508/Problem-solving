#include<stdio.h>

int main(void)
{
    char name[8];
    double salary;
    double valu;
    double total;
    scanf("%s%lf%lf",&name,&salary,&valu);
    total=salary+(valu*15)/100;
    printf("TOTAL = R$ %.2lf\n",total);

    return 0;
}
