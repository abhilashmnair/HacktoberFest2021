package recursion;

//print permutations of a string recursive
public class PrintPermutations {

    public static void printpermutations(String ques, String ans) {

        if (ques.length() == 0) {
            System.out.println(ans);
            return;
        }
        
        for (int i = 0; i < ques.length(); i++) {

            char ch = ques.charAt(i);

            String roq = ques.substring(0, i) + ques.substring(i + 1);

            printpermutations(roq, ans + ch);
        }

    }

    public static void main(String[] args) {

        printpermutations("abc", "");

    }

}
