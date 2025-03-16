import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = {100, 20, 10, 5, 1};
        int i = 0;
        int counter = 0;
        while (n > 0 && i < arr.length) {
            if (n >= arr[i]) {
                n -= arr[i];
                counter++;
                i--;
            }
            i++;
        }
        System.out.println(counter);
    }
}
