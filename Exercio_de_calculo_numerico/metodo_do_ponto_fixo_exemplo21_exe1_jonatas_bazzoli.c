#include <stdio.h>
#include <math.h>
int main() {

    float y=2.5,x=2.5,xant=0,eps=0.0000001;
    while (sqrt(pow(x-xant,2))>eps){

        xant = x;

        y=1/(log(y));
        x=(y*log(y)-1);
        printf("%f\n",y);
        
    }
   
    printf("Raiz aproximada:%f\n",y);
    return 0;
}
