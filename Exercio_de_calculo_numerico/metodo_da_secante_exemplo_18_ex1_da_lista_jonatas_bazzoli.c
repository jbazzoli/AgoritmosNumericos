#include <stdio.h>
#include <math.h>
int main(){
        float x,y,f,x0,x1,eps;
        int cont=0;
        printf("Digite o eps:\n");
        scanf("%f",&eps);
        printf("digite x0:\n");
        scanf("%f",&x0);
        printf("digite x1:\n");
        scanf("%f",&x1);
        y=x0;
        while(sqrt(pow(y-x,2))>eps&&sqrt(pow((y-x)/y,2))>eps){
              x=y;
              y=(x1-((exp(-pow(x1,2))-cos(x1))*(x1-x0)/((exp(-pow(x1,2))-cos(x1))-(exp(-pow(x0,2))-cos(x0)))));
              x0=x1;
              x1=y;
              cont++;
         }
         printf("iterações:%d\n",cont);
         printf("raiz aproximada:%f\n",y);
         return 0;
}
