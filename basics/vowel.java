package basics;

public class vowel {
    public static boolean checkVowel(char ch) {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i'
                || ch == 'o' || ch == 'u') {
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
        System.out.println(checkVowel('l'));
    }
}
