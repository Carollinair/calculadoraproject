#include <stdio.h>
#include <stdlib.h>
void main () {
int r,n1,n2;

  printf("1 - Soma\n2 - Subtrair\n3 - Miltiplicar\n4 - Dividir\n0 - sair\n");
  scanf("%d",&r);
  if(r>0 && r <=4)
  printf("\ninforme o primeiro numero: ");
  scanf("%d",&n1);
  printf("\ninforme o segundo numero: ");
  scanf("%d",&n2);
  if(r==1)
  printf("\nA soma e: %d",n1+n2);
  else if(r ==2)
  printf("\nA subtra��o e: %d",n1-n2);
  else if(r ==3)
  printf("\nA multiplica��o e: %d",n1*n2);
  else if(r ==4)
  if(n1==0)
  printf("\nA divis�o e zero");
  else if(n2==0)
  printf("\nN�o existe divis�o por zero");
  else
  printf("\nA divis�o e: %d", n1/n2);
  if(r<0, r>4)
  printf("Op��o invalida");
}


