#include <stdio.h>
#include <math.h>
int main(){
	float a,b,eps,xn,ant,yantant,erroant,erro,erroprox,r=0.56714329,p;
	int ite=0,cont=0;
	printf("Digite o eps:\n");
	scanf("%f",&eps);
	printf("Digite intervalo inicial:\n");
	scanf("%f",&a);
	printf("Digite intervalo final:\n");
	scanf("%f",&b);
	xn=(b+a)/2;
	ant=0;
	while (sqrt(pow(xn-ant,2)>eps)){

	        if(cont==2){
                        yantant=ant;
                        erroant=fabs(yantant-r);
                        cont=0;
                 }
		if((exp(-a)-a)*(exp(-b)-b)<0){
			b=xn;
			ant=xn;
			xn=(a+b)/2;

	        }
		else{
			a=xn;
			ant=xn;
			xn=(a+b)/2;

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
