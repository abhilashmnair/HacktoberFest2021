/** program to remove duplicate elements */

public class RemoveDuplicate {

	public static void main(String[] args) {
		/** array with duplicate elements */
		int arr[] = {10,10,10,20,20,20,30,30,40,40,50,50,50};
		System.out.println("The array with duplicate elements are ");
		for(int i=0;i<arr.length;i++)
			System.out.print(arr[i]+" ");
		
		/** remove duplicate elements and send length of distinct elements */
		int length = removeDuplicate(arr);
		System.out.println();
		
		System.out.println("The array with disitnct elements are ");
		for(int i=0;i<length;i++)
			System.out.print(arr[i]+" ");

	}
	/** mehtod to remove duplicate elements */
	public static int removeDuplicate(int arr[]) {
		int j=0;
		for(int i=0;i<arr.length-1;i++) {
			if(arr[i]!=arr[i+1]) {
				arr[j++] = arr[i];	
			}
		}
		arr[j++] = arr[arr.length-1];
		return j;
	}

}
