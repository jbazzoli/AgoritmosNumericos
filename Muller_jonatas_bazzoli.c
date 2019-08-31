#include <stdio.h>
#include<math.h>
int main(){
        float x0=4.5,x1=5.5,x2=5,x3=0,f0=0,f1=0,f2=0,f3=1,fa=0,fb=0,fc=0,eps=0.0001,a=0,b=0,c=0;
        f0=pow(x0,3)-13*x0-12;
        f1=pow(x1,3)-13*x1-12;
        f2=pow(x2,3)-13*x2-12;
        printf("f0:%f f1:%f f2:%f\n",f0,f1,f2);
        while(fabs(f3)>eps){

                fa=(f1-f2)/(x1-x2);
                fb=(f0-f1)/(x0-x1);
                fc=(fb-fa)/(x0-x2);
                printf("fa=%f,fb=%f,fc=%f\n",fa,fb,fc);
                a=fc;
                b=fa+((x2-x1)*fc);
                c=f2;
                printf("a=%f b=%f c=%f\n",a,b,c);
                if(fabs(b+sqrt(b*b-4*a*c))>fabs(b-sqrt(b*b-4*a*c))){
                        x3=(x2+((-b+sqrt(b*b-4*a*c))/(2*a)));
                        printf("x3=%f\n",x3);
                 }
                 else{

                    x3=(x2+((-b-sqrt(b*b-4*a*c))/(2*a)));
                          printf("x3else=%f\n",x3);

                 }
                 f3=pow(x3,3)-13*x3-12;
                 x0=x1;
                 x1=x2;
                 x2=x3;
                 printf("raizalpha:%f\n",x2);

             }
         printf("raiz é %f f é %f\n",x2,f2);
         return 0;
       }


