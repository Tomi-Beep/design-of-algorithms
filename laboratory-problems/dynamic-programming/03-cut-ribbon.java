import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        HashMap<Integer, Long> map = new HashMap<Integer, Long>();
        int maxBroj = 0;
        for (int i = 0; i < n; i++) {
            int broj = sc.nextInt();
            map.put(broj, map.getOrDefault(broj, 0L) + 1);
            if (broj > maxBroj){
                maxBroj = broj;
            }
        }
        long[] dp = new long[maxBroj + 2];
        dp[0] = 0;
        dp[1] = map.getOrDefault(1, 0L);

        for (int i = 2; i <= maxBroj; i++) {
            if (!map.containsKey(i)) {
                dp[i] = dp[i - 1];
            } else {
                dp[i] = Math.max(dp[i - 1], dp[i - 2] + map.get(i) * i);
            }
        }
        System.out.println(dp[maxBroj]);
    }
}
