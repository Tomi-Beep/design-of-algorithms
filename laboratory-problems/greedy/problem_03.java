import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            int r = sc.nextInt();
            int[] arr = new int[r];
            for (int j = 0; j < r; j++) {
                arr[j] = sc.nextInt();
            }
            int[] brr = new int[r];
            if (arr[0] != 1) {
                brr[0] = 1;
            } else {
                brr[0] = 2;
            }
            for (int j = 1; j < r; j++) {
                if (1 + brr[j - 1] != arr[j]) {
                    brr[j] = 1 + brr[j - 1];
                } else {
                    brr[j] = 1 + arr[j];
                }
            }
            System.out.println(brr[r - 1]);
        }
    }
}
