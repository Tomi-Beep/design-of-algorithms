import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int people = sc.nextInt();

        if (people == 0) {
            System.out.println(0);
            return;
        }

        int[] times_alone = new int[people];
        for (int i = 0; i < people; i++) {
            times_alone[i] = sc.nextInt();
        }

        int[] times_together = new int[people];
        for (int i = 0; i < people - 1; i++) {
            times_together[i] = sc.nextInt();
        }

        int[] dp = new int[people + 1];
        dp[people - 1] = times_alone[people - 1];
        for (int i = people - 2; i >= 0; i--) {
            dp[i] = Math.min(times_alone[i] + dp[i + 1], times_together[i] + dp[i + 2]);
        }

        System.out.println(dp[0]);
    }
}
