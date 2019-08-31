i=0;
n=3;
k=0;
r=0;
aux=0;
p=0;
pv=0;
b=0;
a=0;
s=0;
c=0;
y=0;
x=0;
a=input("Digite o a matriz:");
b=input("solução da matriz:");
n=input("Dimenção da matriz:");
for i=1:n
  p(i)=i;
end
for k=1:(n-1)
  pv=sqrt(a(k,k)^2);
  r=k;
  for i=(k+1):n
   
    if (sqrt(a(i,k)^2))>pv
      pv=a(i,k);
      r=i;
    end
  end
  if pv==0
    disp("Matriz singular");
    break;
  end
  if r<>k
    aux=p(k);
    p(k)=p(r);
    p(r)=aux;
    for j=1:n
      aux=a(k,j);
      a(k,j)=a(r,j);
      a(r,j)=aux;
      
    end
  end
  for i=(k+1):n
    m=a(i,k)/a(k,k);
    a(i,k)=m;
    for j=k+1:n
      a(i,j)=a(i,j)-m*a(k,j);
    end
  end
end
for i=1:n
  r=p(i);
  c(i)=b(r);
end
for i=1:n
  s=0;
  for j=1:(i-1)
    s=s+a(i,j)*y(j);
  end
  y(i)=c(i)-s;
end
for i=n:-1:1
  s=0;
  for j=(i+1):n
    s=s+(a(i,j)*x(j));
  end
  x(i)=(y(i)-s)/a(i,i);
end

disp(x,"Solução do sistema é:");

