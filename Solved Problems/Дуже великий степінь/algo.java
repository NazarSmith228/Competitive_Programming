
import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        long n = in.nextLong();
        int k = in.nextInt();
        BigInteger dick = BigInteger.valueOf(1);
        for (int i = 0; i < n ; i++) {
            dick = dick.multiply(BigInteger.valueOf(2));
        }
        String mega = dick.toString();
        int len = mega.length();
        System.out.println(mega.charAt(len-k-1));
    }
}
