import java.util.Scanner;

public class SumRomColoumn {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		/** initial Matrix */
		int a[][] = new int[3][3];
		System.out.println("Enter the elements of Matrix: ");
		for(int i=0;i<3;i++) {
			for(int j=0;j<3;j++) {
				a[i][j] = sc.nextInt();
			}
		}
		/** print the sum of row */
		int sumRow=0,sumCol=0;
		for(int i=0;i<3;i++) {
			sumRow = 0;
			for(int j=0;j<3;j++) {
				sumRow += a[i][j]; 
			}
			System.out.println("The sum of row "+(i+1)+" is "+sumRow);
		}
		/** print the sum of coloumn */
		for(int i=0;i<3;i++) {
			sumCol = 0;
			for(int j=0;j<3;j++) {
				sumCol += a[j][i];
			}
			System.out.println("The sum of coloumn "+(i+1)+" is "+sumCol);
		}

	}

}
