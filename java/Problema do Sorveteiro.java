import java.util.Scanner;

public class q2{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int s = 0, p = 0;
        int contador = 0;
        while (true){
            // contador para numerar os testes, pq cada s é um teste...
            contador++;
            
            p = sc.nextInt();
            s = sc.nextInt(); 
            
            // enquanto s for diferente de 0 e p também a gente continua lendo...
            if(s==0 && p == 0){
                break;
            }
            System.out.println("Teste "+contador);
            //os intervalos serão armazenados em um vetor
           int[][] intervalos = new int[5000][2];
           // vai armazenando os u e v...inicio e fim da cobertura coluna 1 u coluna 2 v..
             for(int i = 0; i < s; i++){
                intervalos[i][0] = sc.nextInt();
                intervalos[i][1] = sc.nextInt();
             } 
             // definindo variaveis para atualizar valores de atual
                int uAtual = intervalos[0][0];  
                int vAtual = intervalos[0][1];
            //loop para realizar as operações enquanto não atingir a quantidade de sorveteiros da area
             for (int i = 0; i < s-1;i++){
                // se os intervalos não se encontrarem
            if(intervalos[i+1][0] > vAtual){
                System.out.println(uAtual + " " + vAtual);
                uAtual = intervalos[i+1][0];
                vAtual = intervalos[i+1][1];
              // se os intervalos se encontrarem  
            }else{
                if(intervalos[i+1][1] > vAtual) {
                //atual vira o de baixo
                vAtual = intervalos[i+1][1];
             }
            }
        }
            System.out.println(uAtual + " "+ vAtual);
        }
        
        sc.close();
}
}
