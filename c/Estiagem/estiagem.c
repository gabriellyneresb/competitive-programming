#include <stdio.h>
 
int main() {
 int n = 0;
 int x = 0, y = 0;
 int consumo[1000], moradores[1000];
 int contador = 0;
 int cont = 0;
 int p = 0;
 float consumoMedio;
 
 while(scanf("%d", &n) && n != 0){
     cont = 0;
     p = 0;
     contador++;
     for(int i = 0; i < n; i++){
         scanf("%d%d",&x,&y);
         
         moradores[i] = x;
         consumo[i] = y/x;
         
             cont += y;
             p += x;
             consumoMedio = (float)cont/p;
         
     }
     
     for(int j = 0; j < n-1; j++){
         for(int k = 0; k < n-j-1; k++){
           if(consumo[k] > consumo[k+1]){
             int tmp = consumo[k];
             consumo[k] = consumo[k+1];
             consumo[k+1] = tmp;
             
             tmp = moradores[k];
             moradores[k] = moradores[k+1];
             moradores[k+1] = tmp;
           }
         }
         
     }
     
        if(contador > 1){
            printf("\n");
        }
     
         printf("Cidade# %d:\n", contador);
         
         for(int i = 0; i <n;i++){
              printf("%d-%d ", moradores[i], consumo[i]);
         }
        
         printf("\nConsumo medio: %.2lf m3\n", consumoMedio);
 }
 
    return 0;
}