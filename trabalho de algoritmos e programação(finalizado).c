 /*Calculadora simples que opera soma, subtração, multiplicacao, divisao, potencia e raiz quadrada */
 /* referencia:https://www.vivaolinux.com.br/script/Calculadora-simples-3
*/
/*Github:Giovanebr*/
#include <stdio.h>
#include <math.h>
float adicao(float x,float y)
{
    return(x+y);
} /* variavel de adicao */
float subtracao(float x,float y)
{
    return(x-y);
}/* variavel de subtracao */
float multiplicacao(float x,float y)
{
    return(x*y);
}/* variavel de multiplicacao */
float divisao(float x,float y)
{
    return(x/y);
}/* variavel de divisao*/
float potencia(float x,float y)
{
    return(pow(x,y));
}/* variavel de potencia */
float raiz(float x)
{
    return(sqrt(x));
}/* variavel de raiz */;
int main()
{
    char op;
    float z,w;
    int k;
    long a;
    do{
    printf("Giovane Borges Rodrigues, Analise e desenvolvimento de sitemas, Universidade LaSalle, 202214020\n\n");/* apresentacao */
    printf("Escolha sua opcao:\n");
    printf("1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisao\n5-Potencia\n6-Raiz Quadrada\n")/* escolhas de tipos de calculos */;
    do{ scanf("%i",&k);
    }while(k<1||k>6);
    if((k==1)||(k<=5))
    {
        printf("Entre com o primeiro valor:");
        scanf("%f",&z);
        printf("Entre com o segundo valor:");
        scanf("%f",&w);
    }/* escolha de operandos  */
    else
    {
         if((k==6))
         {
            printf("Entre com o valor:");
            scanf("%f",&z);
         }/* escolha de operando caso seja raiz */
    }    
    switch(k){
        case 1:
            printf("Soma de %f e %f =%.2f\n",z,w,adicao(z,w));
            break;
        case 2:
            printf("Diferenca de %f e %f =%.2f\n",z,w,subtracao(z,w));
            break;
        case 3:
            printf("Produto de %f e %f =%.2f\n",z,w,multiplicacao(z,w));
            break;
        case 4:
            while((w==0)){
                printf("NÃO É POSSIVEL DIVIDIR POR ZERO\n");
                scanf("%f",&w);}
                printf("Divisao de %f e %f =%.2f\n",z,w,divisao(z,w));
                break;
        case 5:
            printf("%f elevado a %f =%.2f\n",z,w,potencia(z,w));
            break;
        case 6:
            while((z<0)){
            printf("NAO EXISTE RAIZ QUADRADA DE NUMERO NEGATIVO NO CONJUNTO DOS REAIS\n");
            scanf("%f",&z);}
            printf("Raiz quadrada de %f =%.2f\n",z,raiz(z));
            break;/* calculos sendo processados */
            
    }
    printf("Deseja efetuar outro calculo? Digite (S) para sim ou (N) para não.");/* caso sim o programa reinicia, caso não o programa finaliza */
    scanf("%s",&op);
    }while((op=='s')||(op=='S'));
  } 