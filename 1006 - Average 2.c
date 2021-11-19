#include<stdio.h>

int main(void)
{
    float num1,num2,num3,MEDIA;
    scanf("%f%f%f",&num1,&num2,&num3);
    num1*=2;
    num2*=3;
    num3*=5;
    MEDIA =num1+num2+num3;
    printf("MEDIA = %.1f\n",MEDIA/10);

    return 0;
}
