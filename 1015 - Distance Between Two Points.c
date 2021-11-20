#include<stdio.h>
#include<math.h>
int main(void)
{
   double x1,x2,y1,y2,m,n,s;

   scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);

   m=(x2-x1);
   n=(y2-y1);
   s=sqrt(m*m+n*n);
   printf("%.4lf\n",s);

    return 0;
}
