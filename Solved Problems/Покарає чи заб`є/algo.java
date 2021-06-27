import java.util.Scanner;

public class Main {
    private static void update(int[] tree, int n, int index, int val) {
        index ++;
        while (index <= n) {
            tree[index] += val;
            index += (index & (-index));
        }
    }

    private static int getValue(int[] tree, int index) {
        int sum = 0;
        index++;
        while (index > 0) {
            sum += tree[index];
            index -= (index & (-index));
        }
        return sum;
    }

    public static void main(String[] args) {
        int[] bad_guys = new int[200001];
        Scanner s = new Scanner(System.in);
        int n = s.nextInt(), m = s.nextInt();
        s.nextLine();
        for (int i = 0; i < n; i ++) {
            int val = s.nextInt();
            update(bad_guys, n, i, val);
            update(bad_guys, n, i+1, -val);
        }
        s.nextLine();

        for (int i = 0; i < m; i ++) {
            char c = s.next().charAt(0);
            int k = s.nextInt()-1;
            if (c == 'L') {
                update(bad_guys, n, 0, -1);
                update(bad_guys, n, k+1, 1);
            }
            else if (c == 'R') {
                update(bad_guys, n, n-k-1, -1);
                update(bad_guys, n, n, 1);
            }
            else {
                int l = getValue(bad_guys, k);
                System.out.println(l<0?0:l);
            }
        }
        s.close();
    }
}
