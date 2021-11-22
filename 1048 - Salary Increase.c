#include<stdio.h>

int main(void)
{
    float amount , x ,y ;

    scanf("%f",&amount);

    if(amount>=0 && amount<=400.00)
    {
        x=(amount*15)/100;
        y=amount+x;
        printf("Novo salario: %.2f\n",y);
        printf("Reajuste ganho: %.2f\n",x);
        printf("Em percentual: 15 %%\n");
    }
    else if(amount>=400.01 && amount<=800.00)
    {
        x=(amount*12)/100;
        y=amount+x;
        printf("Novo salario: %.2f\n",y);
        printf("Reajuste ganho: %.2f\n",x);
        printf("Em percentual: 12 %%\n");
    }
     else if(amount>=800.01 && amount<=1200.00)
    {
        x=(amount*10)/100;
        y=amount+x;
        printf("Novo salario: %.2f\n",y);
        printf("Reajuste ganho: %.2f\n",x);
        printf("Em percentual: 10 %%\n");
    }
     else if(amount>=1200.01 && amount<=2000.00)
    {
        x=(amount*7)/100;
        y=amount+x;
        printf("Novo salario: %.2f\n",y);
        printf("Reajuste ganho: %.2f\n",x);
        printf("Em percentual: 7 %%\n");
    }
    else if(amount>200.00)
        {
        x=(amount*4)/100;
        y=amount+x;
        printf("Novo salario: %.2f\n",y);
        printf("Reajuste ganho: %.2f\n",x);
        printf("Em percentual: 4 %%\n");
        }
    else
    {
        printf("");
    }

    return 0;
}
