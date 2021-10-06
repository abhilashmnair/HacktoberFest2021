import java.util.*;

public class findPrimeFactorsInRange {

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the upper bound of the range: ");
        int num = sc.nextInt();

        boolean[] mark = new boolean[num];

        Arrays.fill(mark, true);

        for (int i = 2; i < Math.sqrt(num); i++) {
            if (mark[i] == true) {
                for (int j = (i * i); j < num; j = j + i) {
                    mark[j] = false;
                }
            }
        }

        System.out.println("\nList of prime numbers in range [2," + num + ") are :\n");

        for (int i = 2; i < mark.length; i++) {
            if (mark[i])
                System.out.println(i);
        }
    }
}
