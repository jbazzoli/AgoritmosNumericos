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
	xn=(((a*(4*sin(b)-exp(b))-b*(4*sin(a)-exp(a)))/((4*sin(b)-exp(b))-(4*sin(b)-exp(b)))));

	ant=0;
	while((sqrt(pow(xn-ant,2))/sqrt(pow(xn,2)))>eps&&(sqrt(pow(xn-ant,2)>eps))){
		if(((4*sin(b)-exp(b))*(4*sin(a)-exp(a)))>0){
			b=xn;
			ant=xn;
			xn=(((a*(4*sin(b)-exp(b)))-(b*(4*sin(a)-exp(a))))/(((4*sin(b)-exp(b))-(4*sin(a)-exp(b)))));

	        }
		else{
			a=xn;
			ant=xn;
			xn=(((a*(4*sin(b)-exp(b)))-(b*(4*sin(a)-exp(a))))/((4*sin(b)-exp(b))-(4*sin(a)-exp(b))));

	        }
	        ite++;
	}
	printf("iterações:%d\n",ite);
	printf("raiz:%f\n",xn);
}
