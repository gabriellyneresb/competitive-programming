#include <stdio.h>

int main(){
int m = 0;
int n = 0;

scanf("%d", &n);

for(int k = 0; k < n; k++){
    scanf("%d", &m);
    int naotrocar = 0;
    int notas[1000];
    int ordem[1000];
    for(int i = 0; i < m; i++){
        scanf("%d", &notas[i]);
        ordem[i] = notas[i];
    }

    int maior = 0;

    for(int i = 0; i < m; i++){
        for (int j = i; j < m; j++){
            if(notas[i] < notas[j]){
                int aux = notas[i];
                notas[i] = notas[j];
                notas[j] = aux;
            }
        }
    }

    for(int i = 0; i < m; i++){
         if(notas[i] == ordem[i]){
            naotrocar++;
        }
    }

    printf("%d\n", naotrocar);
}

    return 0;
}