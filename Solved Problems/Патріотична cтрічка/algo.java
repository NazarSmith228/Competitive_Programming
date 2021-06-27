import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
	    String str = scan.nextLine();
	    int var1 = 0;
	    int var2 = 0;
        for (int i = 0; i < str.length() ; i++) {
            if(str.charAt(i) == 'B') {
                if (i % 2 == 0) {
                    var2++;
                } else {
                    var1++;
                }
            }
                if(str.charAt(i) == 'Y'){
                    if(i % 2 == 0){
                        var1 ++;
                    }
                    else {
                        var2 ++;
                    }
                }
        }
        if( var1 < var2){
            System.out.println(var1);
        }
        else {
            System.out.println(var2);
        }
    }
}