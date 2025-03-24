import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int[][] a = new int[2][n];
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = sc.nextInt();
            }
        }

        int[][] t = new int[2][n - 1];
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n - 1; j++) {
                t[i][j] = sc.nextInt();
            }
        }

        int[] e = new int[2];
        for (int i = 0; i < 2; i++) {
            e[i] = sc.nextInt();
        }

        int[] x = new int[2];
        for (int i = 0; i < 2; i++) {
            x[i] = sc.nextInt();
        }

        int[] line1 = new int[n];
        line1[0] = e[0] + a[0][0];

        int[] line2 = new int[n];
        line2[0] = e[1] + a[1][0];

        for (int i = 1; i < n; i++) {
            line1[i] = Math.min(line1[i - 1] + a[0][i], line2[i - 1] + a[0][i] + t[1][i - 1]);
            line2[i] = Math.min(line2[i - 1] + a[1][i], line1[i - 1] + a[1][i] + t[0][i - 1]);
        }

        int result = Math.min(line1[n - 1] + x[0], line2[n - 1] + x[1]);
        System.out.println(result);

    }
}
