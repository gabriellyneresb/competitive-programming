#include <stdio.h>
#include <stdlib.h>

//tem que ordenar os vetores com a menor quantidade de movimentações que for possível
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
            //aí o arr[i] vai pra posição do numero dele 1, tipo se for 5 ele vai pra pos 4, se for 3 vai pra pos 2
            arr[destino] = tmp;

            contador++;
        }
    }
    return contador;
}
//arr[0] != 0+1=1?? SIMM 
// i
// 0   1   2   3
//[4] [1] [2] [3]
// destino = arr[0]-1 = 4-1 = 3
//tmp = arr[0] => tmp = 4
//arr[0] = arr[3] => arr[0] = 3
//arr[3] = tmp => arr[3] = 4
//arr[1] != 1+1 = 2?SIMM!
//    i
//[3][1][2][4]
//destino = arr[1]-1 = 0
//tmp = arr[1] => 1
//arr[1] = arr[0] => arr[1] = 3
//arr[0] = tmp = arr[0] => 1
//arr[2] != 2+1 = 3??
//       i
//[1][3][2][4]
//destino = arr[2]-1 = 1
//tmp = arr[2] = tmp = 2
//arr[2] = arr[1] = arr[2] = 3
//arr[1] = 2;
//          i
//[1][2][3][4]
//arr[3] != 3+1=4?? NAOO!!

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
        for (int j = 0; j < n; j++){
            scanf("%d",&arr[j]);
        }
        //quantidade de movimentações necessárias
        printf("%d\n", minimoTrocas(arr,n));
    }   
    return 0;
}