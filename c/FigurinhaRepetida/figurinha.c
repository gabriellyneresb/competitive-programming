#include <stdio.h>

int main(){
int n = 0;

// enquanto for diferente de EOF a gente lê
//numeros de figurinhas
while(scanf("%d", &n) != EOF){
    int fig[10000];
    int rep = 0, dif = 0;
//num das figurinhas 
    for(int i = 0; i < n; i++){
        scanf("%d", &fig[i]);
    }
//verificando se são rep
//dois loops, reinicia o apareceu a cada chamada do for
    for(int i = 0; i < n; i++){
        int apareceu = 0;

        for(int j = 0; j < i; j++){
            if(fig[i]==fig[j]){
                apareceu=1;
                break;
            }
        }
        //ve se apareceu ou não
        if(apareceu == 1){
            rep++;
        }else{
            dif++;
        }
    }

    printf("%d\n", dif);
    printf("%d\n", rep);

}

    return 0;
}