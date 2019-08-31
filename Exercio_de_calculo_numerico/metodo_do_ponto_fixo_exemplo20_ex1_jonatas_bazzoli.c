#include <stdio.h>
#include <math.h>
int main() {

    float y=0.5,x=0.5,xant=0,eps=0.000001;
    while (sqrt(pow(x-xant,2))>eps){

        xant = x;

        y=log(4*sin(x));
        x=(4*sin(y)-exp(y));
        printf("%f\n",y);
        
    }
   
    printf("Raiz aproximada:%f\n",y);
    return 0;
}
