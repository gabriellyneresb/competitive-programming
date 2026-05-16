#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
int N = 0;
int V = 0;
char comando[20];
int menosLegal = 109;
scanf("%d", &N);
int pilha[109];
int cont = 0;

for(int i = 0; i < N; i++){
scanf("%s",comando);
    if(strcmp(comando, "PUSH")==0){
        scanf("%d", &V);
        pilha[cont] = V;
        cont++;
        if(V < menosLegal){
            menosLegal = V;
        }
    }else if(strcmp(comando, "POP") == 0){
        if(cont == 0){
            printf("EMPTY\n");
        }else{
            int removido = pilha[cont-1];
             cont--;
             if(removido == menosLegal){
                if(cont == 0){
                    printf("EMPTY\n");
                }else{
                    for(int j = 0; j < cont; j++){
                        if(pilha[j] < menosLegal){
                            menosLegal = pilha[j];
                        }
                    }
                }
             }
        }

    }else{
        if(cont == 0){
            printf ("EMPTY\n");
        }else{
            printf("%d\n", menosLegal);
        }
    }
}
    return 0;
}