#include <stdio.h>
 
 void insertionSort(int arr[], int n){
     for(int i = 1; i < n; i++){
           int chave = arr[i];
           int j = i-1;
           
           while(j>=0 && arr[j] > chave){
               arr[j+1]=arr[j];
               j = j-1;
           }
           arr[j+1] = chave;
     }
 }
 
 int pesquisaBinaria(int arr[], int n, int valor){
     int inicio = 0, fim = n-1;
     int pos = -1;
     
     while(inicio<=fim){
         int meio = (inicio+fim)/2;
         
         if(arr[meio]==valor){
             pos = meio;
         }
         if(arr[meio]<valor){
             inicio = meio+1;
         }else{
             fim = meio - 1;
         }
     }
     
     if(pos >=0){
         return pos+1;
     }else{
     return -1;
     }
 }
 
int main() {
    int n = 0, q = 0;
    int c = 0;
    int cont = 0;
    int mamores[10001];
    while(scanf("%d %d", &n,&q) && n!= 0){
        cont++;
        for(int i=0; i < n; i++){
            scanf("%d", &mamores[i]);
        }
        
        insertionSort(mamores,n);
        
          printf("CASE# %d:\n", cont);
        for(int i = 0; i < q; i++){
            scanf("%d", &c);
        
            int valor = pesquisaBinaria(mamores, n, c);
            if(valor >= 0){
                printf("%d found at %d\n", c,valor);
            }else{
                printf("%d not found\n", c);
            }
        }
        
    }
 
    return 0;
}