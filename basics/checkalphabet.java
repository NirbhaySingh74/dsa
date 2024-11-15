package basics;

public class checkalphabet {
    public static void checkAlphabetic(char c) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            System.out.println(c + " is an alphabet.");
        else
            System.out.println(c + " is not an alphabet.");
    }

    public static void main(String[] args) {
        checkAlphabetic('d');
    }
}
