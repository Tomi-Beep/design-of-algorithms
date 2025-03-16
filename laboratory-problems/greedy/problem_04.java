import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String zagradi = sc.next();
        int counter1 = 0;
        int counter2 = 0;
        for (int i = 0; i < zagradi.length(); i++) {
            char zagrada = zagradi.charAt(i);
            if (zagrada == '(') {
                counter1++;
            }
            if (zagrada == ')' && counter1 > 0) {
                counter1--;
                counter2 += 2;
            }
        }
        System.out.println(counter2);
    }
}
