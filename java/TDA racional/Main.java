import java.io.IOException;
import java.util.Scanner;
 
public class Main {
    
    public static int mdc(int a, int b){
        while(b != 0){
            int tmp = b;
            b = a%b;
            a = tmp;
        }
        return a;
    }
    
    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);

        if(scan.hasNextInt()){
            int n = scan.nextInt();
            int m = 0;
            
        for(int i = 0; i < n; i++){
        
        int n1 = scan.nextInt();
        scan.next();
            
        int d1 = scan.nextInt();
            
        String op = scan.next();
            
        int n2 = scan.nextInt();
        scan.next();
            
        int d2 = scan.nextInt();
            
        int dn = 0;
        int nm = 0;
            
        if(op.equals("+")){
            dn = (n1*d2)+(n2*d1);
            m = d1*d2;
            
        }else if(op.equals("-")){
            dn = (n1*d2)-(n2*d1);
            m = d1*d2;
            
        }else if(op.equals("*")){
            dn = (n1*n2);
            m=(d1*d2);
           
        }else if(op.equals("/")){
            dn = (n1*d2);
            m = (n2*d1);
        }
      
         int mc = mdc(dn,m);
         System.out.println(dn + "/" + m + " = " + dn/mc + "/" + m/mc);
        }
        }
     scan.close();   
    }
 
}

