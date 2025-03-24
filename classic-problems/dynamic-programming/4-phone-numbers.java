import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        Map<Integer, List<Integer>> moves = new HashMap<>();
        moves.put(0, Arrays.asList(4, 6));
        moves.put(1, Arrays.asList(6, 8));
        moves.put(2, Arrays.asList(7, 9));
        moves.put(3, Arrays.asList(4, 8));
        moves.put(4, Arrays.asList(0, 3, 9));
        moves.put(6, Arrays.asList(0, 1, 7));
        moves.put(7, Arrays.asList(2, 6));
        moves.put(8, Arrays.asList(1, 3));
        moves.put(9, Arrays.asList(2, 4));

        int[][] dp = new int[n + 1][10];

        for (int i = 0; i < 10; i++) {
            if (i != 5) dp[1][i] = 1;
        }

        for (int i = 2; i <= n; i++) {
            for (int j = 0; j < 10; j++) {
                if (j == 5) continue;
                for (int prev_m : moves.get(j)) {
                    dp[i][j] += dp[i - 1][prev_m];
                }
            }
        }

        int total = 0;
        for (int d = 0; d <= 9; d++) {
            total += dp[n][d];
        }

        System.out.println(total);

    }
}
