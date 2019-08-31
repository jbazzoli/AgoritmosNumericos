a=0;
b=0;
xn=0;
eps=0;
ant=0;
eps=input("digite o eps da maquina");
a=input("Digite inicio do intervalo");
b=input("Digite fim do intervalo");
xn=(b+a)/2;
ant=0;
while (((sqrt((xn-ant)^2))/(sqrt(xn^2)))>eps&(sqrt((xn-ant)^2))>eps
  if (a^3-20)*(xn^3-20)<0 then
    b=xn;
    ant=xn;
    xn=(a+b)/2;
   end
   else
    a=xn;
    ant=xn;
    xn=(a+b)/2;
   
end
  
disp(xn,"raiz");  
  
