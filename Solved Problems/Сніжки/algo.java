
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        long m;
        n = sc.nextInt();
        m = sc.nextLong();
        BigInteger res = BigInteger.valueOf(0);
        long []array = new long[n];
        for (int i = 0; i < n; i++) {
            array[i] = sc.nextLong();
            BigInteger help = BigInteger.valueOf(array[i]);
            res = res.add(help.multiply(help));
        }
        BigInteger mod = res.mod(BigInteger.valueOf(m));
        if(mod.equals(BigInteger.valueOf(0))){
            System.out.println("Yes");
        }
        else System.out.println("No");
    }
}
