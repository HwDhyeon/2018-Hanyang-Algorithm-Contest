// 1102 : 스택 (stack)



import java.util.*;

public class Q8 {
    private static Scanner scanner;
    public static void main(String[] args) {
        scanner = new Scanner(System.in);

        int st[] = new int[100];
        int top = 0;
        int N = scanner.nextInt();
        String op;
        scanner.nextLine();
        for(int i=0;i<N;++i) {
            op = scanner.nextLine();
            if('i' == (op.toCharArray()[0])){ st[top++] = Integer.parseInt(op.substring(2)); }
            else if("o".equals(op)) {
                if(top == 0){ System.out.println("empty"); }
                else{ System.out.println(st[--top]); }
            }
            else if("c".equals(op)){ System.out.println(top); }
        }
    }
}