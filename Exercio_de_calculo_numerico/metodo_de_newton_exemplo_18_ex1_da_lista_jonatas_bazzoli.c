#include <stdio.h>
#include <math.h>
int main(){
	float y,x,x0,eps;
	int ite=0;
	printf("digite o xo\n");
	scanf("%f",&x0);
	printf("digite o eps\n");
	scanf("%f",&eps);
	/*while(sqrt(pow(y-x,2))>eps&&sqrt(pow((y-x)/y,2))>eps){

		x=x0;
               
		y=(x0-((exp(-pow(x,2))-cos(x))/(2*x*exp(pow(x,2))+sin(x))));
		x0=y;
		ite++;
	}
	*/
	y=x0;
	while(fabs(y-x)>eps||fabs((exp(-pow(y,2))-cos(y)))>eps){

		x=y;
               
		y=(y-((exp(-pow(y,2))-cos(y))/(2*y*exp(pow(y,2))+sin(y))));
		
		ite++;
	}
	printf("interação %d\n",ite);
	printf("A raiz é %f\n",y);
}
