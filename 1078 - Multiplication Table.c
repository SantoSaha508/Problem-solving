#include<stdio.h>
int main(void)
{
    int i,n,x;
    scanf("%d",&n);
    for(i=1 ; i<=10 ; i++)
    {
        x=i*n;
        printf("%d x %d = %d\n",i,n,x);
    }
    return 0;
}
