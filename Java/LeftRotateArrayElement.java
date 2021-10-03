/** To perform Left Rotation */
public class LeftRotateArrayElement {

	public static void main(String[] args) {
		/** Initial Array */
		int arr[] = {1,2,3,4,5};
		/** Number of rotataion needed */
		int n = 3;
		
		System.out.println("The array elements are: ");
		for(int i=0;i<arr.length;i++)
			System.out.print(arr[i]+" ");
		
		System.out.println();
		
		System.out.println("The Array after Rotation: ");
		for(int i=0;i<n;i++)
		{
			int j,first = arr[0];
			for(j=0;j<arr.length-1;j++) {
				arr[j] = arr[j+1];
			}
			/** storing the first element in last position */
			arr[j] = first;
		}
		
		for(int i=0;i<arr.length;i++)
			System.out.print(arr[i]+" ");
		

	}

}
