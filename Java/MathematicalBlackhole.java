import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.ThreadLocalRandom;


public class MathematicalBlackhole {

    /**
     * Determines the mathematical blackhole 123
     *
     * @return the blackhole
     */
    public Integer determineBlackhole() {

      //Divides a Random Number into digits and puts them in a list
      Integer number = Math.abs(ThreadLocalRandom.current().nextInt());
      String numberString = number.toString();
      System.out.println("A random number: " + numberString);
      char[] numberChar = numberString.toCharArray();
      List<Integer> list = new ArrayList<>();
      for (char numbers : numberChar) {
        list.add(Character.getNumericValue(numbers));
      }


      //Then it tests the digits one by one, if they are even or odd and puts the results in a list.
      while (true) {
        int e = 0;
        int o = 0;

        for (Integer worker : list) {
          if (worker % 2 == 0) {
            e++;
          } else {
            o++;
          }
        }
        list.clear();
        list.add(e);
        list.add(o);
        list.add(e + o);

        System.out.println("The steps to glory: " + list);

        //Break condition, it stops when the list is 123
        if (list.get(0) == 1 && list.get(1) == 2 && list.get(2) == 3) {
          return 123;
        }
      }

    }
  }
class main {
  public static void main(String args[]) {
MathematicalBlackhole mathematicalBlackhole = new MathematicalBlackhole();
mathematicalBlackhole.determineBlackhole();
  }
}


