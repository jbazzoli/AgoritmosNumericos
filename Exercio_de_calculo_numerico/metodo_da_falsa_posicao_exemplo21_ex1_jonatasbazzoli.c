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
        xn=(((a*(b*log(b)-1))-(b*(a*log(a)-1)))/((b*log(b)-1)-(a*log(a)-1)));   
	
	ant=0;
	while((sqrt(pow(xn-ant,2))/sqrt(pow(xn,2)))>eps&&(sqrt(pow(xn-ant,2)>eps))){
		if((b*log(b)-1)*(a*log(a)-1)>0){
			b=xn;
			ant=xn;
			xn=(((a*(b*log(b)-1))-(b*(a*log(a)-1)))/((b*log(b)-1)-(a*log(a)-1)));
			
	        }
		else{
			a=xn;
			ant=xn;
                        xn=(((a*(b*log(b)-1))-(b*(a*log(a)-1)))/((b*log(b)-1)-(a*log(a)-1)));
			
			
	        }
	        ite++;
	}
	printf("iterações:%d\n",ite);
	printf("raiz:%f\n",xn);
}
