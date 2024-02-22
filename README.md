# 1st-repo
Auther - Abanihar Nag
<br>
this code is written in java language 
purpose - to print a equilateral triangle pattern using stars 
import java.util.Scanner;

public class square {
    public static void main(String[] args) {
        System.out.println("enter a number");
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        sqr(n);
    }
    static int sqr(int n ){
        int a =1 ;
        for(a=1;a<=n;a++) {
            if (a == 1 || a == n) {
                for (int i = 0; i <= n; i++) {
                    System.out.print("* ");
                }
            } else {
                System.out.print("*");
                for (int i = 1; i < n-2 ; i++) {
                    System.out.print(" ");
                }
                System.out.print("*");
            }
            System.out.println();
        }
      return 0;
    }

}
