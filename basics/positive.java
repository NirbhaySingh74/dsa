package basics;

import java.util.Scanner;

public class positive {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number");
        int n = sc.nextInt();
        if (n > 0) {
            System.out.println("Positive Number");
        } else {
            System.out.println("Nagative Number");
        }
    }
}
