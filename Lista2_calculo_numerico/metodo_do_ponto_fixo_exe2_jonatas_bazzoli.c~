#include <stdio.h>
#include <math.h>


int main() {

    float y=1.3,x=1.3,eps=0.001,r=1,erro,erroant,p,erroprox,xant=0,yant,yantant;
    int cont=0,ite=0;
    while ((sqrt(pow(x-xant,2))>eps)&&(sqrt(pow((x-xant)/x,2))>eps)){
        if(cont==2){
            yantant=yant;
             erroant=fabs(yantant-r);
            cont=0;
        }
        xant = x;
        yant=y;
        y=(1/pow(y,0.111111111111111));
        x=(pow(y,10)-1);
        erroprox=fabs(y-r);
        erro=fabs(yant-r);
        ite++;
        cont++;
        if(erroprox<eps)break;

    }
    p=fabs(log(erroprox/erro))/fabs(log(erro/erroant));
    printf("Iterações:%d\n",ite);
    printf("p=%f\n",p);
    printf("Raiz aproximada:%f\n",y);
    return 0;
}
