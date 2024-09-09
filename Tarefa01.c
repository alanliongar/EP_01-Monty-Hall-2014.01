/***************************************************************
 **                                                           **
 **   Alan Lucindo Gomes                  Número USP: 7275130 **
 **                                                           **
 ***************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int x, a, b, c, d, e, f;

 srand(time(NULL));
 printf("Problema das portas do Silvio Santos.\n");
 x=1+(rand()%3);
 printf ("Escolha a porta onde esta o carro (1-3)");
 scanf("%d", &a);
 while(a<1 || a>3){
 printf("O valor %d nao esta entre 1 e 3, digite um valor (1-3).", a);
 scanf("%d", &a);}
 if (a==x){
  e=1+(rand()%3);
  while (e==a){
  e=1+(rand()%3);}
  printf("Silvio mostra que na porta %d tem um bode!\nVoce quer mudar de porta? (sim=1/nao=0)", e);
  scanf("%d", &b);
  if (b==1)
  printf("Parabens! Voce ganhou um bode!");
  else
  printf("Parabens, voce ganhou um carro!");}

else{
 d=1+(rand()%3);
 while (d==a || d==x){
 d=1+(rand()%3);}
 printf("Silvio mostra que na porta %d tem um bode!\nVoce quer mudar de porta? (sim=1/nao=0)", d);
 scanf("%d", &f);
 while(f<0 || f>1){
 printf("O valor %d nao e 1 ou 0. Digite 1 para 'sim' ou 0 para 'nao':", f);
 scanf("%d", &f);}
 if (f==1)
 printf("Parabens, voce ganhou um carro!");
 else
 printf("Parabens! Voce ganhou um bode!");

}

  return 0;
}
