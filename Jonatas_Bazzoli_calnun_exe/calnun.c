/* 
 * File: calnun.c
 * Autor: Jonatas Bazzoli
 * Curso: B Matematica Computacional
 * Disciplina: Calculo Numerico
 * Created on 31 de Março de 2010, 18:08
 */

#include <stdio.h>
#include <math.h>


int main() {
    double aux=1;
    int n,i,x,fat=1;
    printf("Digite o número de termos da sequencia:\n");
    scanf("%d",&n);
    printf("Digite o número x:\n");
    scanf("%d",&x);
    if(x<0){
       x=x*-1;
       for(i=1;i<=n;i++){
          fat=fat*i;
          aux=aux +pow(x,i)/fat;
          
       }
       aux=1/aux;
       x=x*-1;
    }
    else{
        for(i=1;i<=n;i++){
	   fat=fat*i;
           aux=aux+pow(x,i)/fat;
          
	   
       }
    }
    printf("Valor de e meu :%.10lf\n e valor e teu:%.10lf\n\n",aux,exp(x));
    return 0;
}

