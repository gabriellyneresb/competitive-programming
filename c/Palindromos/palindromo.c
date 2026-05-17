// Crie um programa em C que verifique se uma palavra é palíndromo, ou seja é igual se lida de trás para frente,
//por exemplo ovo, renner, arara.
// A entrada consiste em duas palavras separadas por espaço
// Deve-se ler e retornar SIM (se for palíndromo) ou NÃO (se não for), até que a palavra digitada seja FIM

#include <stdio.h>
#include <stdlib.h>

// criando uma função lógica para dizer se é palíndromo (1) ou não (0)
int ehPalindromo (char *palavra){
    int tam = 0;

    //pega o tamanho da string
    while (palavra[tam] != '\0'){
        tam++;
    }

    // compara até a metade
    for (int i = 0; i < tam/2; i++){
        // se o caracter na posição i for igual ao caracter na ultima posição e por aí vai...return 1 (true)
        // o -1 é para evitar que seja comparado com \0
            if (palavra[i] != palavra[tam - 1 - i]){
                return 0;
            }
    }
    return 1;
}

// função para verificar se duas cadeias de caracteres são iguais
// para fazer a condição de leitura até "FIM"
int MyStrCmp (char str1[], char str2[]){
    int iguais = 1, i = 0;
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++){
        if (str1[i] != str2[i]){
            iguais = 0;
        }
    }
    if (iguais == 0){
        return 0;
    } else {
        return 1;
    }
}

int main ( void ){
 
    char palavra[100];

    scanf("%s", palavra);

    // chama a função e verifica a primeira palavra para ver se é diferente de "FIM", se sim aplica a função
    while (MyStrCmp(palavra, "FIM") == 0){
        ehPalindromo(palavra);
        if (ehPalindromo(palavra)){
            printf ("Sim\n");
        } else{
            printf ("Nao\n");
        }
        scanf("%s", palavra);
    }
 
    return 0;
}

//Testes:
/*
amor
Nao
renner
Sim
ovo
Sim
ava
Sim
legal
Nao
FIM
*/

// Gabrielly Neres Barbara - Ciencia da Computação