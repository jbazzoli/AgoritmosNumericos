#include <stdio.h>
#include <math.h>
int main(){
	float y,x,x0,eps,r=1.32472,p,erro,erroant,erroprox,yantant;
	int ite=0,cont=0;
	printf("digite o xo\n");
	scanf("%f",&x0);
	printf("digite o eps\n");
	scanf("%f",&eps);
	y=x0;
	while(sqrt(pow(y-x,2))>eps&&sqrt(pow((y-x)/y,2))>eps){
	         if(cont==2){
                        yantant=x;
                        erroant=fabs(yantant-r);
                        cont=0;
                        printf("erroant_%f\n",erroant);
                  }

		  
                  x=y;
		  y=(x-((x*x*x-x-1)/(3*x*x-1)));
		 
		  erroprox=fabs(y-r);
                  erro=fabs(x-r);
                  cont++;
                  ite++;
                  printf("erroprox:%f erro:%f\n",erroprox,erro);
                  if(erroprox<eps)break;
	}



	p=(fabs(log(erroprox/erro))/fabs(log(erro/erroant)));
        printf("p=%f\n",p);
        printf("Raiz aproximada:%f\n",y);
        printf("iterações:%d\n",ite);
        return 0;
}
