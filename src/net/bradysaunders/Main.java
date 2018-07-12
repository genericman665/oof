package net.bradysaunders;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	    System.out.println("Enter a word/phrase to see if it is a palindrome");
	    Scanner scanner = new Scanner(System.in);
	    if(isPalindrome(scanner.nextLine())){
	        System.out.println("Yay");
        }
        else {
	        System.out.println("Nay");
        }
	    scanner.close();
    }

    private static boolean isPalindrome(String input){
        int half = (int)Math.floor(input.length() / 2.F);
        input = input.toUpperCase();
        String[] tokens = input.split ( "[^A-Za-z0-9]");
        StringBuilder sb = new StringBuilder();
        for(String token : tokens) {
            sb.append(token);
        }
        input = sb.toString();
        for(int i = 0; i < half; ++i){
            if(input.charAt(i) != input.charAt(input.length() - 1 - i)){
                return false;
            }
        }
        return true;
    }
}
