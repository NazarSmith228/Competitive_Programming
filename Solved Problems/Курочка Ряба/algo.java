import java.math.BigInteger;
import java.util.Scanner;
public class  Main {
    public static BigInteger Fibonacci(long n) {

        long num = Math.abs(n);
        if (num == 0) {
            return BigInteger.valueOf(0);
        } else if (num <= 2) {
            return BigInteger.valueOf(1);
        }

        BigInteger[][] number = {{BigInteger.valueOf(1), BigInteger.valueOf(1)}, {BigInteger.valueOf(1), BigInteger.valueOf(0)}};
        BigInteger[][] result = {{BigInteger.valueOf(1), BigInteger.valueOf(1)}, {BigInteger.valueOf(1), BigInteger.valueOf(0)}};

        while (num > 0) {
            if (num % 2 == 1) result = MultiplyMatrix(result, number);
            number = MultiplyMatrix(number, number);
            num /= 2;
        }

        return result[1][1].multiply(BigInteger.valueOf(((n < 0) ? -1 : 1)));
    }

    public static BigInteger[][] MultiplyMatrix(BigInteger[][] mat1, BigInteger[][] mat2) {
        return new BigInteger[][]{
                {
                        (mat1[0][0].multiply(mat2[0][0])).mod(BigInteger.valueOf(1000000000)).add((mat1[0][1].multiply(mat2[1][0])).mod(BigInteger.valueOf(1000000000))),
                        (mat1[0][0].multiply(mat2[0][1])).mod(BigInteger.valueOf(1000000000)).add((mat1[0][1].multiply(mat2[1][1])).mod(BigInteger.valueOf(1000000000)))
                },
                {
                        (mat1[1][0].multiply(mat2[0][0])).mod(BigInteger.valueOf(1000000000)).add((mat1[1][1].multiply(mat2[1][0])).mod(BigInteger.valueOf(1000000000))),
                        (mat1[1][0].multiply(mat2[0][1])).mod(BigInteger.valueOf(1000000000)).add((mat1[1][1].multiply(mat2[1][1])).mod(BigInteger.valueOf(1000000000)))
                }
        };
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        BigInteger res = Fibonacci(n);
        BigInteger result = res.multiply(BigInteger.valueOf(2)).subtract(BigInteger.valueOf(1)).mod(BigInteger.valueOf(1000000000));
        System.out.println(result);
    }

}

