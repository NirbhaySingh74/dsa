package basics;

import java.util.Scanner;

public class greater {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter First Number");
        int x = sc.nextInt();
        System.out.println("Enter Second Number");
        int y = sc.nextInt();
        System.out.println("Enter Third Number");
        int z = sc.nextInt();
        if (x > y && x > z) {
            System.out.println("First number is greater");
        } else if (y > z) {
            System.out.println("Second number is greater");
        } else {
            System.out.println("Third number is grater");
        }
    }
}
