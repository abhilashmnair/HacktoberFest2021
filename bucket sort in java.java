import java.util.*;


public class Main{

	private static void Sort(int[] array, int bktSize){  

		List<Integer>[] buckets = new List[bktSize];  

		for(int i = 0; i < bktSize; i++)
			buckets[i] = new LinkedList<>();

		for(int num : array)
			buckets[(int)(num/bktSize)].add(num);  
		
		for(List<Integer> bucket : buckets)  
			Collections.sort(bucket);  

		int index = 0;  

		for(List<Integer> bucket : buckets){  
			for(int num : bucket)
				array[index++] = num;  
		}  
	} 

	public static void main(String args[]){

		Scanner sc=new Scanner(System.in);

		System.out.println("Enter the number of Elements in the array (n): ");

		int n=sc.nextInt();

		int array[]=new int[n];

		System.out.println("\nStart entering the elements: \n");

		for(int i=0;i<n;i++)
			array[i]=sc.nextInt();

		System.out.println("\nUnsorted Array: " + Arrays.toString(array));  

		Sort(array,n);  

		System.out.println("\nSorted Array: " + Arrays.toString(array));  
	}  
}  