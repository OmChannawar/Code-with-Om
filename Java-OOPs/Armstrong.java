package java;

import java.util.Scanner;

public class Armstrong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        int OriginalNum = num;
        int sum = 0;

        //We can't directly find length of an integer, so we convert it into string and find its length. And use it as the length of the integer.
        int length = String.valueOf(num).length();

        while (num > 0) {
            int digit = num % 10;
            sum += Math.pow(digit, length);
            num = num / 10;
        }

        if (sum == OriginalNum)
            System.out.println(OriginalNum + " is an Armstrong number.");
        else
            System.out.println(OriginalNum + " is not an Armstrong number.");

        sc.close();
    }
}
