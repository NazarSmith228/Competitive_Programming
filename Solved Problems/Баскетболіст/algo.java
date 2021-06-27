
import java.math.BigInteger;
import java.util.Scanner;

public class Main  {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n,m,k;
        n = sc.nextLong();
        m = sc.nextLong();
        k = sc.nextLong();
        BigInteger res = BigInteger.valueOf(n);
        if(k == 1 && n < m){
            System.out.println("-1");
        }
        else {
            int count = -1;
            int h = - 1;
            while (h < 0){
                h = res.compareTo(BigInteger.valueOf(m));
                res = res.multiply(BigInteger.valueOf(k));
                count++;
            }
                System.out.println(count);
        }
    }
}

