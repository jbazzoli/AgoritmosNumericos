//função são f(x)=x*x+y*y-2 e g(x)=x*x-y*y-1
x1=6;
x0=2.0;
y1=6;
y0=0.2;
f=0;
fx=0;
g=0;
gy=0;
gx=0;
fy=0;
eps=0.001;
cont=0;
cont2=0;
r1=0.7070;
y2=0;
erroant=0;
erroprox=0;
erro=0;
p=0;
while (sqrt(((x0-x1)/x0)^2)>eps) & (sqrt(((y0-y1)/y0)^2)>eps)
  if cont2>2
    y2=y1;
    erroant=sqrt((y2-r1)^2)
    cont2=0;
    end
    
  x1=x0;
  y1=y0;
  f=x0^2+y0^2-2;
  g=x0^2-y0^2-1;
  fx=2*x0;
  gx=2*x0;
  fy=2*y0;
  gy=-2*y0;
  x0=x0-((f*gy-g*fy)/(fx*gy-fy*gx));
  y0=y0-((g*fx-f*gx)/(fx*gy-fy*gx));
  cont=cont+1;
  erro=sqrt((y1-r1)^2)
  erroprox=sqrt((y0-r1)^2)
  cont2=cont2+1;
    
    
  
  
end
p=(log(sqrt((erroprox/erro)^2))/log(sqrt((erro/erroant)^2)));
disp(x0,y0,"valor x e valor y");
disp(cont,"iteration:");
disp(p,"covergencia");


  
