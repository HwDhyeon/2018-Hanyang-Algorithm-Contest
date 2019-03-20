// 1707 : 달팽이사각형



import java.util.Scanner;

public class Q7 {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[][] snaleMatrix = new int[n][n];
        int k = 1, delta = 1, limit = n, a = 0, b = -1;
        while(true) {

            for(int i = 0; i < limit; i++) {
                b += delta;
                snaleMatrix[a][b] = k++;
            }
            limit--;
            if(limit < 0){ break; }

            for(int j = 0; j < limit; j++) {
                a += delta;
                snaleMatrix[a][b] = k++;
            }

            delta *= -1;

        }

        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) { System.out.printf("%d ", snaleMatrix[i][j]); }
            System.out.println();
        }
        
    }

}