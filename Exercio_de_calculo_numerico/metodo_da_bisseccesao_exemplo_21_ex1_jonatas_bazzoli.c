#include <stdio.h>
#include <math.h>
int main(){
	float a,b,eps,xn,ant;
	printf("Digite o eps:\n");
	scanf("%f",&eps);
	printf("Digite intervalo inicial:\n");
	scanf("%f",&a);
	printf("Digite intervalo final:\n");
	scanf("%f",&b);
	xn=(b+a)/2;
	ant=0;
	while((sqrt(pow(xn-ant,2))/sqrt(pow(xn,2)))>eps&&(sqrt(pow(xn*log(xn)-1,2))>eps)){
		if((a*log(a)-1)*(xn*log(xn)-1)<0){
			b=xn;
			ant=xn;
			xn=(a+b)/2;
			
	        }
		else{
			a=xn;
			ant=xn;
			xn=(a+b)/2;
			
	        }
	}
	printf("raiz:%f\n",xn);
	
}
