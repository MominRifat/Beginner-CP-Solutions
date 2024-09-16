#include<stdio.h>
#include<math.h>

int main()
{
double x,m,f;
scanf("%lf",&x);
 f=modf(x,&m);
 int n=m;
 int j=f * 100;
 int a=n/100;
 int a1=n%100;
 int b=a1/50;
 int b1=a1%50;
 int c=b1/20;
 int c1=b1%20;
 int d=c1/10;
 int d1=c1%10;
 int e=d1/5;
 int e1=d1%5;
 int k=e1/2;
 int k1=e1%2;

 int a10=k1;
 int a11=j%100;
 int b10=a11/50;
 int b11=a11%50;
 int c10=b11/25;
 int c11=b11%25;
 int d10=c11/10;
 int d11=c11%10;
 int e10=d11/5;
 int e11=d11%5;
 int z10=e11;

 

 

printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n",a);
printf("%d nota(s) de R$ 50.00\n",b);
printf("%d nota(s) de R$ 20.00\n",c);
printf("%d nota(s) de R$ 10.00\n",d);
printf("%d nota(s) de R$ 5.00\n",e);
printf("%d nota(s) de R$ 2.00\n",k);
printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n",a10);
printf("%d moeda(s) de R$ 0.50\n",b10);
printf("%d moeda(s) de R$ 0.25\n",c10);
printf("%d moeda(s) de R$ 0.10\n",d10);
printf("%d moeda(s) de R$ 0.05\n",e10);
printf("%d moeda(s) de R$ 0.01\n",z10);
return 0;
    
}