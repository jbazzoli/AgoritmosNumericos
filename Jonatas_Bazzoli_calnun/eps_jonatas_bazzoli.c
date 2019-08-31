#include <stdio.h>

int main(){
	double exp=2,i=1;
        
        while (exp>1){
        	i=i*0.5;
		exp=1+i;
        }
        printf("%.30lf\n",i);
	return 0;
}
