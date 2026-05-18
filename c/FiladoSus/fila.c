#include <stdio.h>

int main(){

    int n = 0;

while(scanf("%d", &n) != EOF){
int horario[100];
int condicao[500];
//hora e min de chegada, tempo até atingir condição de saúde
int h, m, c;

for(int i = 0; i < n; i++){
    scanf("%d %d %d", &h, &m, &c);
    condicao[i] = c;
    horario[i] = (h-7) * 60 + m;
}

int relogio = 0;
int critico = 0;
//loop pra ir atualizando horario
for(int i = 0; i < n; i++){
    
    if(relogio < horario[i]){
        relogio = horario[i];
    }

    if(relogio > (horario[i] + condicao[i])){
        critico++;
    }
    relogio = relogio+30;
    //se o relogio nao parar em hora cheia ou hora com 30 min, converte a hora pra cheia ou com min 30
    if(relogio % 30 != 0 && i < n-1){
        relogio = relogio + (30-(relogio%30));
    }
}
printf("%d\n", critico);
}

    return 0;
}