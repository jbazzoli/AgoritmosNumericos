#include <stdio.h>
#include <math.h>
int main() {

    float y=1,x=1,xant=0,eps=0.000001;
    while (sqrt(pow(x-xant,2))>eps){

        xant = x;

        y=sqrt(x+1/x);
        x=(y*y*y-y-1);
        printf("%f\n",y);
        
    }
   
    printf("Raiz aproximada:%f\n",y);
    return 0;
}
