import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int count=0,count1=0;
        int n=in.nextInt();
        int k=in.nextInt();
        String [] arr=new String[n];
        in.nextLine();
        for(int i = 0;i<n;i++){
            arr[i] = in.nextLine();
        }

        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                count++;
            }
            else
            {
                count1=0;
                if(k>i)
                {
                    for(int t=0;t<i;t++)
                    {
                        if(!arr[i].equals(arr[t]))
                        {
                            count1++;
                        }
                    }
                    if(count1==i)
                    {
                        count++;
                    }
                }else {
                    for (int j = i-k;j<i; j++) {
                        if(!arr[i].equals(arr[j]))
                        {
                            count1++;
                        }
                    }
                    if(count1==k)
                    {
                        count++;
                    }
                }
            }
        }
        System.out.println(count);
    }
}
