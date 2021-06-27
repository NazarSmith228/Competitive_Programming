
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Main  {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str;
        str = sc.nextLine();
        if (!str.equals("")) {
            String[] arr = str.split(" ");
            Set<String> strings = new HashSet<>();
            for (int i = 0; i < arr.length; i++) {
                if(!arr[i].equals("")) {
                    strings.add(arr[i].toLowerCase());
                }
            }
            System.out.println(strings.size());
        }
        else System.out.println("0");
    }
}

