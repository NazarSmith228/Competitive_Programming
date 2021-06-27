import java.math.BigInteger;
import  java.util.Scanner;

public class Main {
    private static BigInteger gcd(BigInteger a, BigInteger b){
        if(b.equals(BigInteger.ZERO)){
            return a;
        }
        else return gcd(b,a.mod(b));
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger x = sc.nextBigInteger();
        BigInteger y = sc.nextBigInteger();
        System.out.println(gcd(x,y));
    }
}


