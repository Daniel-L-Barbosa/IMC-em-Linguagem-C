/* Criando algoritimo de calculo do IMC para faculdade de Bacharel em Engenharia de Software*/
/* Usei como exeplo alguns algoritimos da internet para poder desenvolver*/
#include <stdio.h>
int main (){
    float peso,altura,imc;
     printf ("Digite seu peso: ");
    scanf ("%f",&peso);
    printf("Digite sua altura");
    scanf("%f",&altura);
    altura=altura*altura;
    imc=peso/altura;


        if (imc<=18,5){
        printf ("Abaixo do Peso (Procure um Medico ou Nutrionista)");
        }


        else if (imc>=18,6 && imc<=24,9){
        printf ("Saudável ");
        }

        else if (imc >=25,0 && imc<=29,9){
        printf ("Peso em excesso ");
        }

        else if (imc >=30 && imc<=34,9){
        printf ("Obesidade Grau I ");
        }

        else if (imc >35 && imc<=39,9){
        printf ("Obesidade Grau II (severa) ");
        }

        else {
        printf ("Obesidade Grau III (Procure um Medico ou Nutrionista)");
        }

return (0);
}