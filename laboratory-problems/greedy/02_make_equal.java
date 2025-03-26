import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            int r = sc.nextInt();
            int[] arr = new int[r];
            int zbir = 0;
            for (int j = 0; j < r; j++) {
                arr[j] = sc.nextInt();
                zbir += arr[j];
            }
            int skros = zbir / r;
            zbir = 0;
            if (arr[0] < skros) {
                System.out.println("NO");
                continue;
            }
            for (int j = 0; j < r; j++) {
                if (zbir < 0) {
                    break;
                }
                if (arr[j] > skros) {
                    zbir += arr[j] - skros;
                } else if (arr[j] < skros) {
                    zbir -= skros - arr[j];
                }
            }
            if (zbir == 0) {
                System.out.println("YES");
            } else
                System.out.println("NO");
        }
    }
}
