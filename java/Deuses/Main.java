import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int melhorP = 0, melhorK = 0, melhorM = 0;
        String melhorNome = "";
        
        for(int i = 0; i < n; i++){
             String nome = scan.next();
             int p = scan.nextInt(), k = scan.nextInt(), m = scan.nextInt();

            if(p > melhorP){
                melhorP = p;
                melhorNome = nome;
                melhorK = k;
                melhorM = m;
            } else if(p == melhorP){
                if(k > melhorK){
                    melhorNome = nome;
                    melhorP = p;
                    melhorK = k;
                    melhorM = m;
                }else if(k == melhorK){
                    if (m < melhorM){
                        melhorM = m;
                        melhorNome = nome;
                        melhorP = p;
                        melhorK = k;
                    } else if (m == melhorM){
                        if(nome.compareTo(melhorNome) < 0){
                            melhorNome = nome;
                        }
                    }
                }
            }
        }

        System.out.println(melhorNome);
       
        scan.close();
    }
}