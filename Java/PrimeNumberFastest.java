import java.util.*;

class PrimeNumberFastest {
    static boolean[] isPrime;

    public static void function(int n) {
        for (int i = 2; i < n+1; i++) {
            if (isPrime[i]) {
                for (int j = i + i; j < n+1; j = j + i)
                    isPrime[j] = false;
            }
        }
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        isPrime = new boolean[n + 1];
        Arrays.fill(isPrime, true);
        function(n);

        for (int i = 2; i < n + 1; i++)
            if (isPrime[i])
                System.out.print(i + " ");
        sc.close();
    }
}