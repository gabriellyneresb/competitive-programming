#include <stdio.h>

int main(){
int n = 0;

//enquanto nao for end of file
while (scanf("%d", &n) != EOF){

int qi = 0;
char lista[300][300];

//leitura dos elementos da lista de telefones
for(int i = 0; i < n; i++){
    scanf("%s",lista[i]);
}

int cont = 0;
int tamanho = 0;

//verificamos quais sao igauis
for(int i = 0; i < n-1; i++){
    int c = 0;
    int j = i + 1;
//se i e j na mesma coluna porem em linhas diferentes sao iguais
    while(lista[i][c] == lista[j][c] & lista[i][c] != '\0'){
        cont++;
        c++;
    }
}

printf("%d\n", cont);

}
    return 0;
}