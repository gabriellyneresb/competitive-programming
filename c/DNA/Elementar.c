#include <stdio.h>
#include <stdlib.h>

//tem que ordenar os vetores com a menor quantidade de movimentações que for possível
//então eu tenho que fazer um for que percorre todo o vetor comparando a posição atual com todas outras, daí se ela for menor eu troco com a minha
//ja se sabe exatamente onde cada elemento deve ficar, pq é uma permutação de 1 até n sem numeros repetidos
//em uma permutação não pode faltar nenhum um número de 1 até n e nem repetir numeros
int minimoTrocas(int arr[], int n){
    int contador = 0;
    
    for(int i = 0; i < n; i++){
        //enquanto o numero na posição 0 por exemplo não for 0+1 = 1, vai fazendo a troca, daí se o número na posição 1 não for 1+1 = 2 vai trocando
        while(arr[i] != i+1){
     
            int destino = arr[i]-1;
            //guarda o valor atual arr[i] em uma variável temporária 
            int tmp = arr[i];
            //daí o arr na posição atual pega o indice que está lá no destino
            arr[i] = arr[destino];
            //aí o arr[i] vai pra posição do numero dele - 1, tipo se for 5 ele vai pra pos 4, se for 3 vai pra pos 2
            arr[destino] = tmp;

            contador++;
        }
    }
    return contador;
}

int main(){
    //quantidade de instancias
    int t = 0;
    scanf("%d", &t);
    int n = 0;
    int arr[10000];
    //para cada instancia uma quantidade de valores
    for(int i = 0; i < t; i++){
         scanf("%d", &n);   
        //n valores
        for (int i = 0; i < n; i++){
            scanf("%d",&arr[i]);
        }
        //quantidade de movimentações necessárias
        printf("%d\n", minimoTrocas(arr,n));
    }   
    return 0;
}