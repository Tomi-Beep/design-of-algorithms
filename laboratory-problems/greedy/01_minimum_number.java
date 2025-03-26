import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            int broj = sc.nextInt();
            ArrayList<Integer> niza = new ArrayList<>();
            ArrayList<Integer> iskoristeni = new ArrayList<>();
            int yuh = 9;
            if (broj < 10) {
                System.out.println(broj);
                continue;
            } else {
                while (broj > 0) {
                    niza.addFirst(Math.min(yuh, broj));
                    broj -= yuh;
                    iskoristeni.add(yuh);
                    yuh--;
                }

                for (Integer integer : niza) {
                    System.out.print(integer);
                }
                System.out.println();
            }
        }
    }
}
