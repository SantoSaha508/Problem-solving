#include<stdio.h>

int main(void)
{
    int x,y;
    float z;
    scanf("%d%d",&x,&y);
    if(x==1)
    {
        z=y*4.00;
        printf("Total: R$ %.2f\n",z);
    }
    else if(x==2)
    {
        z=y*4.50;
        printf("Total: R$ %.2f\n",z);
    }
    else if(x==3)
    {
        z=y*5.00;
        printf("Total: R$ %.2f\n",z);
    }
     else if(x==4)
    {
        z=y*2.00;
        printf("Total: R$ %.2f\n",z);
    }
     else if(x==5)
    {
        z=y*1.50;
        printf("Total: R$ %.2f\n",z);
    }

    return 0;
}

