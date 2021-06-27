

import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a,b,c;
        a = sc.nextLong();
        b = sc.nextLong();
        c = sc.nextLong();
        BigInteger res = BigInteger.valueOf(1);
        BigInteger first = BigInteger.valueOf(a);
        BigInteger second = BigInteger.valueOf(b);
        BigInteger third = BigInteger.valueOf(c);
        res = res.multiply(first.multiply(second.multiply(third)));
        System.out.println(res);
    }
}
