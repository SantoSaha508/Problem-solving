#include<stdio.h>
int main(void)
{
    int i , x ;
    scanf("%d",&x);
    for(i=x ; i<(x+12) ; i++)
    {
        if(i%2==1){
            printf("%d\n",i);
        }
    }
    return 0;
}

