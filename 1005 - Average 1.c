#include<stdio.h>

int main(void)
{
    float num1,num2,PROD;
    scanf("%f%f",&num1,&num2);
    num1*=3.5;
    num2*=7.5;
    PROD = num1+num2;
    printf("MEDIA = %.5f\n",PROD/11);

    return 0;
}
