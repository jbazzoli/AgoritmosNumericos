#include <stdio.h>
#include <math.h>


int main() {

    float y=0,x=0,eps=0.000001,r=0.56714329,erro,erroant,p,erroprox,xant=1,yant,yantant;
    int cont=0,ite=0;
    while ((sqrt(pow(x-xant,2))>eps)&&(sqrt(pow((x-xant)/x,2))>eps)){
        if(cont==2){
            yantant=yant;
             erroant=fabs(yantant-r);
            cont=0;
        }
        xant = x;
        yant=y;
        y=exp(-y);
        x=(exp(-y)-y);
        erroprox=fabs(y-r);
        erro=fabs(yant-r);
        ite++;
        cont++;
       

    }
    p=log(fabs((erroprox/erro)))/(log(fabs(erro/erroant)));
    printf("Iterações:%d\n",ite);
    printf("p=%f\n",p);
    printf("Raiz aproximada:%f\n",y);
    return 0;
}

