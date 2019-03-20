import java.util.Scanner;
public class Q6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String string = scanner.nextLine();
        int foundKOI = 0, foundIOI = 0;

        for(int i=0;i<string.length();i++) {
            if (string.charAt(i) == 'K' && i <= string.length() - 2) {
                if (string.charAt(i + 1) == 'O' && string.charAt(i + 2) == 'I') { foundKOI++; }
            } else if (string.charAt(i) == 'I' && i <= string.length() - 2) {
                if (string.charAt(i + 1) == 'O' && string.charAt(i + 2) == 'I') { foundIOI++; }
            }
        }

        System.out.printf("%d\n%d", foundKOI, foundIOI);        
    }
}