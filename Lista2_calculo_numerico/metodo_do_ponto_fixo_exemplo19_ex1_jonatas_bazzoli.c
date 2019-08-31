#include <stdio.h>
#include <math.h>
int main() {

    float y=1,x=1,eps=0.001,r=1.32472,erro,erroant,p,erroprox,xant=0,yant,yantant;
    int cont=0,ite=0;
    while (fabs((x-xant)/x)>eps){
        if(cont==2){
            yantant=yant;
             erroant=fabs(yantant-r);
            cont=0;
        }


        xant =x;
        yant=y;
        y=sqrt((1+y)/y);
        x=(y*y*y-y-1);
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
