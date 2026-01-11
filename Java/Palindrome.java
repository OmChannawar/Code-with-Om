package Java;

import java.util.Scanner;

public class Palindrome {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string or number: ");
        String input = scanner.nextLine();

        StringBuilder rev = new StringBuilder();

        for (int i = input.length() - 1; i >= 0; i--) {
            rev.append(input.charAt(i));
        }

        if (input.equals(rev.toString())) {
            System.out.println("'" + input + "' is a palindrome.");
        } else {
            System.out.println("'" + input + "' is not a palindrome.");
        }

        scanner.close();
    }
}