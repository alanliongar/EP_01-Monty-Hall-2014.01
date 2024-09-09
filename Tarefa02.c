/***************************************************************
 **                                                           **
 **   Alan Lucindo Gomes                  Número USP: 7275130 **
 **                                                           **
 ***************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int h, d, i, x, e, a, b;
        float c, f;
srand(time(NULL));
i=1;
a=0;
b=0;
printf("Problema das portas do Silvio Santos.\nNumero de iteracoes da simulacao:");
scanf("%d", &h);
while (h<=0){
printf("O numero de iteracoes deve ser maior que 0. Digite o numero de iteracoes:");
scanf("%d", &h);}
printf("Quer mudar de porta? (sim=1/nao=0)", d);
scanf("%d", &d);
while(d<0 || d>1){
printf("Escolha entre sim (1) ou não (0).");
scanf("%d", &d);
}
    while(i<=h){
    e=1+(rand()%3);
    x=1+(rand()%3);
        if (e!=x && d==1)
            a=a+1;
        if(e==x && d==0)
            b=b+1;
    i++;
    }
c=((a*0.5)/(h*0.5))*100;
f=((b*0.5)/(h*0.5))*100;
    if (d==1)
printf("Ganhou o carro em %.2f%% das vezes.", c);
    else
printf("Ganhou o carro em %.2f%% das vezes.", f);
return 0;
}
