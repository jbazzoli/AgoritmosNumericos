//Autor:Jontas Bazzoli BMC Calculo Númerico
i=1;
x=-10;
fat=1;
e=1;
n=30;
if x<0 then
  x=x*-1;
  while i<=n
    fat=fat*i;
    e=e+x^i/fat;
    i=i+1;
  end
  e=1/e;
  x=x*-1;
end
 
    
  while i<=n
    fat=fat*i;
    e=e+x^i/fat;
    i=i+1;
   end


disp(e,"Meu exponencial:");
disp(exp(x),"Exponencial da linguaguem:");
u= exp(x)- e;
u=u^2;
u=sqrt(u);
disp(u,"Erro Asoluto:");
u=u/sqrt(e)^2;
disp(u,"Erro Relativo:");
