#include <stdio.h>
#include <stdlib.h>

int main(){
int p = 0, n = 0;
int qi = 0;
int pilhas[1000];
int altura[1000];
int quantidade = 0;
int colunaCaixa1 = 0;
int linhaCaixa1 = 0;
//respectivamente, num de caixas e num de pilhas
while(1){
    scanf("%d %d", &n, &p);

    if(n == 0 && p == 0){
        break;
    }
    // quantidade de caixas em cada pilha
    for(int i = 0; i < p; i++){
        scanf("%d", &qi);

        altura[i] = qi;
    //cada caixa
        for(int j = 0; j < qi; j++){
            scanf("%d", &pilhas[j]);

            if(pilhas[j] == 1){
                quantidade = qi - j - 1;
                colunaCaixa1 = i;
                linhaCaixa1 = j;
            }
        }
    }

    int esq = 0;
    int dir = 0;
// se a caixa 1 não estiver na posição 0 faz o bloco
    if(colunaCaixa1 > 0){
        // se a coluna que a caixa 1 estiver for maior do que a posição da linha da caixa 1
        if(altura[colunaCaixa1-1] > linhaCaixa1 ){
            esq+= altura[colunaCaixa1-1] - linhaCaixa1;
        }
    }

    // se a caixa 1 não estiver na ultima coluna faz o bloco
    if (colunaCaixa1 < p-1){
        // se a coluna a direita da caixa for maior do que a posição da linha da caixa 1
        if(altura[colunaCaixa1+1] > linhaCaixa1){
            dir+=altura[colunaCaixa1+1] - linhaCaixa1;
        }
    }
    // o lado que tiver que fazer menos remoções
    if (esq<dir){
        quantidade+=esq;
    }else{
        quantidade+=dir;
    }
    
}

    printf("%d\n", quantidade);
    return 0;
}