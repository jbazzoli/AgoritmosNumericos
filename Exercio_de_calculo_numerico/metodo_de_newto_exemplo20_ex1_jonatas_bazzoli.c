#include <stdio.h>
#include <math.h>
int main(){
	float y,x,x0,eps;
	int ite=0;
	printf("digite o xo\n");
	scanf("%f",&x0);
	printf("digite o eps\n");
	scanf("%f",&eps);
	y=x0;
	while(sqrt(pow(y-x,2))>eps&&sqrt(pow((y-x)/y,2))>eps){

		x=x0;
               
		y=(x0-((4*sin(x)-exp(x))/(4*cos(x)-exp(x))));
		x0=y;
		ite++;
	}
	
	
	
	printf("interação %d\n",ite);
	printf("A raiz é %f\n",y);
}
