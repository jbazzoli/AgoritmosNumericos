#include <stdio.h>
#include <math.h>
int main() {

    float y=1.5,x=1.5,eps=0.00001,r=1.4474,erro,erroant,p,erroprox,xant=0,yant,yantant,cont=0;
    while (sqrt(pow(x-xant,2))>eps){
        //funcão y que representa "phi" não continua para 1.6
        xant = x;

        y=sqrt(-log(cos(y)));
        x=(exp(-pow(y,2))-cos(y));
        printf("y=%f x=%f xant=%f\n",y,x,xant);
       
        
    }
   
    printf("Raiz aproximada:%f\n",y);
    return 0;
}
