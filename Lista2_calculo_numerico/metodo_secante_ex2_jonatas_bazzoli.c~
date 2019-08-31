#include <stdio.h>
#include <math.h>
int main(){
        float x,y,f,x0,x1,eps,yantant,erro,erroprox,erroant,p,r=1;
        int cont=0,ite=0;
        printf("Digite o eps:\n");
        scanf("%f",&eps);
        printf("digite x0:\n");
        scanf("%f",&x0);
        printf("digite x1:\n");
        scanf("%f",&x1);
        y=x1;
        x=x0;
        while(sqrt(pow(y-x,2))>eps&&sqrt(pow((y-x)/y,2))>eps){
              if(cont==2){
                  yantant=x;
                  erroant=fabs(yantant-r);
                  cont=0;
              }
              x=y;
              y=(x1-(pow(x,10)-1)*(x1-x0)/((pow(x1,10)-10)-(pow(x0,10))));
              x0=x1;
              x1=y;
              erroprox=fabs(y-r);
              erro=fabs(x-r);
              cont++;
              ite++;
              if(erroprox<eps)break;
         }
        

      p=fabs(log(erroprox/erro))/fabs(log(erro/erroant));
      printf("p=%f\n",p);
      printf("Raiz aproximada:%f\n",y);
      printf("Iterações:%d\n",ite);
    return 0;
}
