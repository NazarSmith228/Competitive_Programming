import java.util.Scanner;

public class Main {

            public static void main(String[] args) {
                Scanner write = new Scanner(System.in);
                int N = write.nextInt();
                int masyvsec[]=new int[43200];
                int Hour1,Hour2,Min1,Min2,Sec1,Sec2;
                for(int i=0;i<N;i++){
                    Hour1=write.nextInt();
                    Min1=write.nextInt();
                    Sec1=write.nextInt();
                    Hour2=write.nextInt();
                    Min2=write.nextInt();
                    Sec2=write.nextInt();
                    int In=(Hour1-8)*3600+Min1*60+Sec1;
                    int Out=(Hour2-8)*3600+Min2*60+Sec2;
                    for(int j=In;j<Out;j++){
                        if(masyvsec[j]!=1){
                            masyvsec[j]=1;
                        }
                    }
                }
                int count=0;
                for(int i=0;i<43200;i++){
                    if(masyvsec[i]!=1)
                        count++;
                }
                System.out.println(count);
            }
        }

