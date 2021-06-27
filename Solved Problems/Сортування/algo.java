
import  java.util.Scanner;
public class Main {
    public  static void qsort(int []array, int low, int high)
    {
        int i = low;
        int j = high;
        int pivot = array[(i + j) / 2];
        int temp;

        while (i <= j)
        {
            while (array[i] < pivot)
                i++;
            while (array[j] > pivot)
                j--;
            if (i <= j)
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                i++;
                j--;
            }
        }
        if (j > low)
            qsort(array, low, j);
        if (i < high)
            qsort(array, i, high);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String[]arr = s.split(" ");
        int [] split = new int[arr.length];
        for (int i = 0; i <split.length ; i++) {
            split[i] = Integer.parseInt(arr[i]);
        }
        qsort(split,0,split.length-1);
        for (int i = 0; i <split.length ; i++) {
            System.out.print(split[i] + " ");
        }
    }
}

