#include <stdio.h>
//Digite um valor e Saiba se ele é positivo maior que 10 e menor que 50
int main(){


int num;

printf("Digite o valor");
scanf("%d",&num);

if(( num%2 ==0  && num > 10) || (num%2 !=0 && num<50)){
    printf("Sim");

}else(
    printf("Nao"));


return 0;
}


