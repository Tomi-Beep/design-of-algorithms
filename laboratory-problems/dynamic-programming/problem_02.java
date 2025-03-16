import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int sluchai = sc.nextInt();
        for (int i = 0; i < sluchai; i++) {
            int n = sc.nextInt();
            int[] arr = new int[n];
            for (int j = 0; j < n; j++) {
                arr[j] = sc.nextInt();
            }

            int[] dm = new int[n];
            for (int j = n - 2; j >= 0; j--) {
                if (arr[j] == arr[j + 1]) {
                    dm[j] = dm[j + 1] + 1;
                }
            }
            int baranja = sc.nextInt();
            for (int j = 0; j < baranja; j++) {
                int a = sc.nextInt();
                int b = sc.nextInt();
                if (dm[a - 1] < (b - a)) {
                    System.out.println(a + " " + (a + dm[a - 1] + 1));
                } else {
                    System.out.println(-1 + " " + -1);
                }
            }
        }
    }
}
