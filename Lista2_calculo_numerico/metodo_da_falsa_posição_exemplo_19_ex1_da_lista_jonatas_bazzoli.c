#include <stdio.h>
#include <math.h>
int main(){
	float a,b,eps,xn,ant,yantant,erroant,erro,erroprox,cont=0,r=1.32472,p;
	int ite=0;
	printf("Digite o eps:\n");
	scanf("%f",&eps);
	printf("Digite intervalo inicial:\n");
	scanf("%f",&a);
	printf("Digite intervalo final:\n");
	scanf("%f",&b);
	xn=((a*(b*b*b-b-1)-b*(a*a*a-a-1))/((b*b*b-b-1)-(a*a*a-a-1)));

	ant=0;
	while((sqrt(pow(xn-ant,2))/sqrt(pow(xn,2)))>eps&&(sqrt(pow(xn-ant,2)>eps))){
	         if(cont==2){
                        yantant=ant;
                        erroant=fabs(yantant-r);
                        cont=0;
                 }
		if((b*b*b-b-1)*(a*a*a-a-1)>0){
			b=xn;
			ant=xn;
			xn=(((a*(b*b*b-b-1))-(b*(a*a*a-a-1)))/((((b*b*b-b-1))-(a*a*a-a-1))));

	        }
		else{
			a=xn;
			ant=xn;
			xn=(((a*(b*b*b-b-1))-(b*(a*a*a-a-1)))/((((b*b*b-b-1))-(a*a*a-a-1))));

	        }
	        erroprox=fabs(xn-r);
                erro=fabs(ant-r);
                cont++;
                ite++;

	}
	p=log(fabs((erroprox/erro)))/(log(fabs(erro/erroant)));
	printf("Ordem de convergencia:%f\n",p);
	printf("raiz:%f\n",xn);
	printf("Iterações:%d\n",ite);
	return 0;
}
