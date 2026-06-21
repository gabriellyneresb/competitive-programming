#include <stdio.h>
#include <string.h>

int main() {
  int n = 0;
  int repetidos = 0;
    
    scanf("%d", &n);

    char p[n][100];
    int jacontado[n];
    
    for(int i = 0; i < n; i++){
        scanf("%s", p[i]);
    }

  for(int i = 0 ; i < n; i++){
    jacontado[i] = 0;   
  }
        
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(jacontado[i]){
             continue;
            }
        
            if(strcmp(p[i], p[j]) == 0 && !jacontado[j]){
                jacontado[j] = 1;
                repetidos++;
            }
        }
    }
        
    printf("Falta(m) %d pomekon(s)", 151-(n-repetidos));
    
    return 0;
}