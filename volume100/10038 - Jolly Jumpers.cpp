

import java.io.IOException;
import java.util.BitSet;
import java.util.Scanner;


public class JollyJumpers {

    public static void main(String[] args) throws IOException {
        Scanner tec = new Scanner(System.in);
        String entrada;
        
        while ((entrada = tec.nextLine()) != null && !entrada.trim().equals("")) {
            
            String[] cadena = entrada.split(" ");
            int n = Integer.parseInt(cadena[0]);

            BitSet bSet = new BitSet(n-1);

            boolean isJolly = true;
            
            for (int i = 1; i < cadena.length - 1; i++) {
                int rest = Math.abs(Integer.parseInt(cadena[i]) - Integer.parseInt(cadena[i + 1]));
                
                if (rest != 0 || rest >= n || bSet.get(rest)) {
                    System.out.println("Not Jolly");
                    isJolly = false;
                    break;
                }
                bSet.set(rest);
            }
            if (isJolly) {
                System.out.println("Jolly");
            }
        }
    }

}
