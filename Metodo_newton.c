#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//metodo de newton
int main(){
    double x0=0.0, x1=0.0, eps=0.0001, erro0, erro1, erro2, raiz=0.90478, p;
    int i=0;

    //Criterio de parada: Seguro
    do{
        x0 = x1;
        x1 = x0 - (4*cos(x0)-exp(x0))/(-4*sin(x0)-exp(x0));
        if(i=0) erro0 = x0-raiz;
        if(i=1) erro1 = x1-raiz;
        if(i=2) erro2 = x1-raiz;
        i++;
    } while((sqrt((x1-x0)*(x1-x0))/sqrt(x1*x1))>eps);

    p = log(fabs(erro2)/fabs(erro1))/log(fabs(erro1)/fabs(erro0));
    printf("A raiz %d eh: %.20f\n", i, x1);
    printf("A ordem eh: %.20f\n", p);

    return 0;
}
