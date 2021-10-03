import java.util.Arrays;
import java.util.Scanner;

public class Anagram {

	public static void main(String[] args) {
		/** enter two string */
		Scanner sc = new Scanner(System.in);
		String str1 = sc.next();
		String str2 = sc.next();
		/** convert to lower case */
		str1 = str1.toLowerCase();
		str2 = str2.toLowerCase();
		/** sort both of them */
		char s1[] = str1.toCharArray();
		char s2[] = str2.toCharArray();
		
		Arrays.sort(s1);
		Arrays.sort(s2);
		/** compare the length of both */
		if(s1.length==s2.length) {
			/** check whether both the array are equal */
			if(Arrays.equals(s1, s2))
				System.out.println("Both Strings are anagram");
			else
				System.out.println("Both String are not anagram");
		}
		else
			System.out.println("Both String are not anagram");

	}

}
