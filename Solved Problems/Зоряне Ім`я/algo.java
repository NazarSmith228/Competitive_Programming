
import java.util.Arrays;
import java.util.HashMap;
import  java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m,n,k;
        String res = null;
        m = sc.nextInt();
        n = sc.nextInt();
        k = sc.nextInt();
        char alp;
        int price,sum = 0, max = 0;
        String [] var = new String[n];
        HashMap<Character,Integer> map = new HashMap<>();
        for(int i = 0; i < m; i++){
            alp = sc.next().charAt(0);
            price = sc.nextInt();
            map.put(alp,price);
        }
        sc.nextLine();
        for(int i = 0; i < n; i++ ){
            var[i] = sc.nextLine();
        }
        Arrays.sort(var);
        for(int i = 0; i < n; i++){
            sum = 0;
            for(int j = 0; j < var[i].length(); j++){
                sum += map.get(var[i].charAt(j));
            }
            if(max < sum && sum <= k){
                max = sum;
                res = var[i];
            }
        }
        System.out.println(res);
    }
}

