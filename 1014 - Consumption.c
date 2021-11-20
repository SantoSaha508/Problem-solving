#include<stdio.h>
int main(void)
{
    int distance;
    float liter;
    scanf("%d%f",&distance,&liter);
    printf("%.3f km/l\n",distance/liter);
    return 0;
}

