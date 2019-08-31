/* 
 * File:   main.c
 * Author: jonatas.bazzoli
 *
 * Created on 19 de Abril de 2010, 10:15
 */

#include <stdio.h>
#include <math.h>


int main() {

    float y=2.5,x=2.5,eps=0.00001,r=2,erro,erroant,p,erroprox,xant=0,yant,yantant,cont=0;
    while ((sqrt(pow(x-xant,2))>eps)&&(sqrt(pow((x-xant)/x,2))>eps)){
        if(cont==2){
            yantant=yant;
             erroant=fabs(yantant-r);
            cont=0;
        }
        xant = x;
        yant=y;
        y=sqrt(2+y);
        x=pow(y,2)-y-2;
        erroprox=fabs(y-r);
        erro=fabs(yant-r);
       
        cont++;
        printf("erro:%f\n",erro);
        printf("erroprox:%f\n",erroprox);
        printf("erroant:%f\n",erroant);

    }
    p=fabs(log(erroprox/erro))/fabs(log(erro/erroant));
    printf("p=%f\n",p);
    printf("Raiz aproximada:%f\n",y);
    return 0;
}

