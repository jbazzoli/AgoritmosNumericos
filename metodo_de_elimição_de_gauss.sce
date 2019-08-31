k=1;
m=0;
a=0;
n=0;
s=0;
b=0;
x=0;
n=input("Digite dimenção da matriz quadrada");
a=input("Digite os valores da matriz");
b=input("solução do sistema");

for k=1:(n-1)
  for i=k+1:n
    if a(k,k)==0
      disp("Pivo invalido");
      return 0;
      end
    m=a(i,k)/a(k,k);
    a(i,k)=0;
    for j=(k+1):n
      a(i,j)=a(i,j)-(m*a(k,j));
    end
    b(i)=b(i)-(m*b(k));
  end
end
x(n)=b(n)/a(n,n);
for k=(n-1):-1:1
  s=0;
  for j=(k+1):n
    s=s+(a(k,j)*x(j));
    end
  x(k)=(b(k)-s)/a(k,k);
  
end
disp(x);