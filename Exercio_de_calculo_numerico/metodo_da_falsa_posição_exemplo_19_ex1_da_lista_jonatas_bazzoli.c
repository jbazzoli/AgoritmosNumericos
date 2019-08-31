#include <stdio.h>
#include <math.h>
int main(){
	float a,b,eps,xn,ant;
	int ite=0;
	printf("Digite o eps:\n");
	scanf("%f",&eps);
	printf("Digite intervalo inicial:\n");
	scanf("%f",&a);
	printf("Digite intervalo final:\n");
	scanf("%f",&b);
	xn=(a*(exp(pow(-b,2))-cos(b))-b*(exp(pow(-a,2))-cos(a)))/((exp(pow(-b,2))-cos(b))-(exp(pow(-a,2))-cos(a)));
	
	ant=0;
	while((sqrt(pow(xn-ant,2))/sqrt(pow(xn,2)))>eps&&(sqrt(pow(xn-ant,2)>eps))){
		if((exp(-b*b)-cos(b))*(exp(-a*a)-cos(a))>0){
			b=xn;
			ant=xn;
			xn=(((a*(exp(-pow(b,2))-cos(b)))-(b*(exp(-pow(a,2))-cos(a))))/((((exp(-pow(a,2))-cos(a)))-(exp(-pow(b,2))-cos(b)))));
			
	        }
		else{
			a=xn;
			ant=xn;
			xn=((a*(exp(-pow(b,2))-cos(b))-b*(exp(-pow(a,2))-cos(a)))/((exp(-pow(b,2))-cos(b))-(exp(-pow(a,2))-cos(a))));
			
	        }
	        ite++;
	}
	printf("iterações:%d\n",ite);
	printf("raiz:%f\n",xn);
}
