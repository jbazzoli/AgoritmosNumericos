//função x^4-2x^3+4x^2-4x+4-Exemplo da Neide Franco pag 100
ak=1;
bk=-1;
a0=1;
a1=-2;
a2=4;
a3=-4;
a4=4;
b0=1;
b1=-2;
b2=4;
b3=-4;
b4=4;
aki=0;
bki=0;
del=0;
r1=0;
r2=0;
cont=0;
del2=0;
r3=0;
r4=0;
while (a3<>0) & (a4<>0)
  a0=a0;
  a1=(ak*a0)+a1;
  a2=(ak*a1)+(bk*a0)+a2;
  a3=(ak*a2)+(bk*a1)+a3;
  a4=(ak*a3)+(bk*a2)+a4;
  
 
end
 cont=cont+1;
 if cont==1 
  
    aki=(a2*ak)+(a3*bk);
    bki=(a1*ak)+(a2*bk);
    ak=(ak+aki);
    bk=(bk+bki);
    a0=b0;
    a1=b1;
    a2=b2;
    a3=b3;
    a4=b4;
   
  end
 
while (a3<>0) & (a4<>0)
  a0=a0;
  a1=(ak*a0)+a1;
  a2=(ak*a1)+(bk*a0)+a2;
  a3=(ak*a2)+(bk*a1)+a3;
  a4=(ak*a3)+(bk*a2)+a4;
  
 
end
del=sqrt((a1^2)-(4*a0*a2));
del2=sqrt(((-ak)^2)-(4*(-bk)));
r1=(-a1+del)/(2*a0);
r2=(-a1-del)/(2*a0);
r3=(-(-ak)+del2)/2;
r4=(-(-ak)-del2)/2;
disp(r1,"raiz 1");
disp(r2,"raiz 2");
disp(r3,"raiz 3");
disp(r4,"raiz 4");
