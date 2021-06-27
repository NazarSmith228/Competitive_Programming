
import java.util.Scanner;
import java.util.Stack;

public class Main {

    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        long x = in.nextLong();
        Stack<Long> stack = new Stack<>();
        long res = 1;
        while (x != 1){
            for(long i = 2; i <= x; i++){
                while (x % i == 0) {
                    if (!stack.empty() && stack.peek() == i) {
                        stack.pop();
                    } else stack.push(i);
                    x /= i;
                }
            }
        }
        while (!stack.empty()){
            res *= stack.pop();
        }
        System.out.println(res);
    }
}
