#include<stdio.h>

int main(void)
{
    int num[7],i,count=0;
    for(i=0 ; i<6 ; i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0 ; i<6 ; i++)
    {
        if(num[i]>0)
        {
            count++;
        }
    }
    printf("%d valores positivos\n",count);

    return 0;
}
